#include "WordCount.h"
#include <fstream>
#include <string>
#include <iostream>
#include <vector>
#include <cctype>

WordCount::WordCount() {
    wordCounter = 0;
}

bool IsSymbolSuitable(char symbol) {
    return ('A' <= symbol && symbol <= 'Z') || ('a' <= symbol && symbol <= 'z') || ('0' <= symbol && symbol <= '9');
}

void WordCount::TextParsing(const std::string &currentLine) {
    std::string currentWord;
    for (auto symbol : currentLine) {
        if (IsSymbolSuitable(symbol)) {
            currentWord += std::tolower(symbol);
        } else {
            if (!currentWord.empty()) {
                ++dataContainer[currentWord];
                ++wordCounter;
                currentWord.clear();
            }
        }
    }
}

void WordCount::AddFile(const std::string &inputName) {
    std::ifstream input(inputName);
    if (!input) {
        throw std::invalid_argument("Can not open input file");
    }

    std::string currentLine;
    while (getline(input, currentLine)) {
        TextParsing(currentLine);
    }
    input.close();
}

void WordCount::WriteCSV(const std::string &outputName) {
    std::multimap<int, string> valueSort;
    for (auto word = dataContainer.rbegin(); word != dataContainer.rend(); ++word) {
        valueSort.insert(std::pair<int, string>(word->second, word->first));
    }
    dataContainer.clear();
    std::ofstream output(outputName);
    if (!output) {
        throw std::invalid_argument("Can not open output file");
    }
    for (auto element = valueSort.rbegin(); element != valueSort.rend(); ++element) {
        output << element->second << ';' << element->first << ';' << element->first / (double) wordCounter * 100 << '%'
               << std::endl;
    }
    output.close();
}
#pragma once
#include <string>
#include <map>
#include <iostream>
#include <vector>

using std::map;
using std::string;

class WordCount {
    public:
        WordCount();
        void AddFile(const string &inputName);
        void WriteCSV(const string &outputName);
    private:
        void TextParsing(const string & currentLine);
        map<string, int> dataContainer;
        int wordCounter = 0;
};
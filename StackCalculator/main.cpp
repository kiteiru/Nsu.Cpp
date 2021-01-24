#include <fstream>
#include <iostream>
#include "Calculator.h"

int main(int argc, char *argv[]) {
    Calculator calc;
    if (argc < 2) {
        calc.calculate(std::cin);
        std::ifstream input;
        input.open(argv[1]);
        if (!input) {
            throw std::invalid_argument("Cannot open input file");
        }
        calc.calculate(input);
    }
    else {
        std::ifstream input;
        input.open(argv[1]);
        if (!input) {
            throw std::invalid_argument("Cannot open input file");
        }
        calc.calculate(input);
    }
}
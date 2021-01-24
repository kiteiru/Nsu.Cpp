#include <fstream>
#include <iostream>
#include "Calculator.h"
#include "CalledExceptions.h"

int main(int argc, char *argv[]) {
    Calculator calculator;

    if (argc == 2) {
        std::ifstream input;
        input.open(argv[1]);
        if (!input) {
            throw CanNotOpenFileException();
        }
        calculator.calculate(input);
    }
    else {
        calculator.calculate(std::cin);
    }
}
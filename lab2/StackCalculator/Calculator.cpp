#include "Calculator.h"
#include "CalculatorOperation.h"
#include "OperationCreatorImpl.h"
#include <sstream>

void Calculator::calculate(std::istream &stream) {
    std::string currentLine;
    while(getline(stream, currentLine)) {
        std::stringstream lineStream(currentLine);
        std::string operationName;
        lineStream >> operationName;

        std::list<std::string> arguments;
        std::string currentArg;
        while (!lineStream.eof()) {
            lineStream >> currentArg;
            arguments.push_back(currentArg);
        }
        try {
            std::unique_ptr<Calculator>
        }
    }
    for (std::string currentLine; !stream.eof(); std::getline(stream, currentLine)) {
        std::stringstream lineStream(currentLine);
        std::string command;
        lineStream >> command;

        if (command[0] == '#' || command.empty()) {
            continue;
        } else if (command == "EXIT") {
            break;
        }

        std::list<std::string> args;
        while (!lineStream.eof()) {
            std::string argument;
            lineStream >> argument;
            if (argument[0] == '#') {
                break;
            }
            args.push_back(argument);
        }
        try {
            std::unique_ptr<CalculatorOperation> operation = Factory::getFactory().getOperation(command);
            operation->run(args, context);
        }
        catch (CalledExceptions &exception) {
            std::cout << "Exception: " << exception.what() << std::endl;
        }
    }
}
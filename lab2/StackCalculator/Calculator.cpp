#include "Calculator.h"
#include "CalculatorOperation.h"
#include "OperationCreatorImpl.h"
#include <sstream>
#include <string>

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
            std::unique_ptr<CalculatorOperation> operation = Factory::getInstance().getOperation(command);
            operation->run(args, context);
        }
        catch (CalledExceptions &exception) {
            std::cout << "WARNING: " << exception.what() << " exception!" << std::endl;
        }
    }
}

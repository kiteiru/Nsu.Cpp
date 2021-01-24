#pragma once

#include <exception>
#include <utility>
#include <string>

class CalculatorException : public std::exception {
public:
    const char *what() const noexcept override = 0;
};

class OperationException: public CalculatorException{
    const char *what() const noexcept override {
        return "Warning: operation exception!";
    }
};

class badArgsException: public OperationException{
    const char *what() const noexcept override {
        return "Warning: incorrect amount of arguments!";
    }
};

class runtimeException : public CalculatorException {
    const char *what() const noexcept override {
        return "Warning: runtime exception!";
    }
};

class divisionByZeroException: public OperationException{
    const char *what() const noexcept override {
        return "Warning: division by zero!";
    }
};

class emptyStackException: public runtimeException{
    const char *what() const noexcept override {
        return "Warning: empty stack!";
    }
};
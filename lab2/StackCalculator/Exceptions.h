#pragma once

#include <exception>
#include <utility>

class CalculatorException : public std::exception {
public:
    const char *what() const noexcept override = 0;
};

class OperandException : public CalculatorException {
    const char *what() const noexcept override {
        return "WARNING: operand exception!";
    }
};

class OperationException : public CalculatorException {
    const char *what() const noexcept override {
        return "WARNING: operation exception!";
    }
};

class StackEmptinessException: public OperandException{
    const char *what() const noexcept override {
        return "WARNING: stack emptiness exception!";
    }
};

class ArgumentException : public OperationException {
    const char *what() const noexcept override {
        return "WARNING: argument exception!";
    }
};

class DivisionByZeroException: public OperationException {
    const char *what() const noexcept override {
        return "WARNING: divison by 0 exception!";
    }
};
#include <exception>
#include <utility>

class CalledException : public std::exception {
public:
    const char *what() const noexcept override = 0;
};

class OperationException : public CalledException {
    const char *what() const noexcept override {
        return "WARNING: operation exception!";
    }
};

class OperandException : public OperationException {
    const char *what() const noexcept override {
        return "WARNING: operand exception!";
    }
};

class StackEmptinessException: public OperandException{
    const char *what() const noexcept override {
        return "WARNING: stack emptiness exception!";
    }
};

class DivisionByZeroException: public OperationException {
    const char *what() const noexcept override {
        return "WARNING: divison by 0 exception!";
    }
};

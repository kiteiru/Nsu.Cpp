#include "OperationInterface.h"
#include "Factory.h"

#define DETECT_CALCULATOR_OPERATION(T, NAME) static DetectCalculatorOperation<T> maker(NAME);

template<typename T>
class DetectCalculatorOperation : public OperationInterface {
public:
    virtual std::unique_ptr<Operation> make() const override {
        std::unique_ptr<Operation> ptr(new T());
        return ptr;
    }

    explicit DetectCalculatorOperation(const std::string &name) {
        Factory::getFactory().addMaker(name, this);
    }
};
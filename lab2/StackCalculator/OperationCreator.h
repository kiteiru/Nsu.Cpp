#pragma once
#include "OperationInterface.h"
#include "Factory.h"

#define REGISTER_OPERATION(T, NAME) static OperationCreator<T> maker(NAME);

template<typename T>
class OperationCreator : public OperationInterface {
public:
    OperationCreator(const std::string &name) {
        Factory::getInstance().RegisterMaker(name, this);
    }
    [[nodiscard]] virtual CalculatorOperation * make() const {
        return new T();
    }
};
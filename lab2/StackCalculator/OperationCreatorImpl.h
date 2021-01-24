#pragma once
#include "OperationCreator.h"
#include "Factory.h"

#define REGISTER_OPERATION(T, NAME) static OperationCreatorImpl<T> maker(NAME);

template<typename T>
class OperationCreatorImpl : public OperationCreator {
public:
    OperationCreatorImpl(const std::string &name) {
        Factory::getInstance().RegisterMaker(name, this);
    }
    [[nodiscard]] virtual CalculatorOperation * make() const {
        return new T();
    }
};
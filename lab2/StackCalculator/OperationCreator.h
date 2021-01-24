#pragma once
#include "CalculatorOperation.h"
#include <memory>

class OperationCreator {
public:
    [[nodiscard]] virtual CalculatorOperation * make() const = 0;
    virtual ~OperationCreator() = default;
};
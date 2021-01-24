#pragma once
#include "CalculatorOperation.h"
#include <memory>

class OperationInterface {
public:
    [[nodiscard]] virtual CalculatorOperation * make() const = 0;
    virtual ~OperationInterface() = default;
};
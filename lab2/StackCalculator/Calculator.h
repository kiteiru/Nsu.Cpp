#pragma once

#include "ExecutionContext.h"

class Calculator {
private:
    ExecutionContext context;
public:
    Calculator() = default;

    ~Calculator() = default;

    void calculate(std::istream &stream);
};
#pragma once

#include "../CalculatorOperation.h"

class Substraction : public CalculatorOperation {
public:
    void run(const std::list<std::string> &args, ExecutionContext &context) override;
};
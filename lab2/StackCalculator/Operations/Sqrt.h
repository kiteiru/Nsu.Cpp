#pragma once

#include "../CalculatorOperation.h"

class Sqrt : public CalculatorOperation {
public:
    void run(const std::list<std::string> &args, ExecutionContext &context) override;
};
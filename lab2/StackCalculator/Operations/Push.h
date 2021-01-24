#pragma once

#include "../CalculatorOperation.h"

class Push : public CalculatorOperation {
public:
    void run(const std::list<std::string> &args, ExecutionContext &context) override;
};
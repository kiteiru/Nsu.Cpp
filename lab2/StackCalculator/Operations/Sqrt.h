#pragma once

#include "../Operation.h"

class Sqrt : public Operation {
public:
    void run(const std::list<std::string> &args, ExecutionContext &context) override;
};
#pragma once

#include "../Operation.h"

class Multiplication : public Operation {
public:
    void run(const std::list<std::string> &args, Context &context) override;
};
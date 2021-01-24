#pragma once

#include "../Operation.h"

class Mul : public Operation {
public:
    void run(const std::list<std::string> &args, Context &context) override;
};

#pragma once

#include "../Operation.h"

class Substraction : public Operation {
public:
    void run(const std::list<std::string> &args, Context &context) override;
};
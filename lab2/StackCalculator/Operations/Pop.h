#pragma once

#include "../Operation.h"

class Pop : public Operation {
public:
    void run(const std::list<std::string> &args, Context &context) override;
};
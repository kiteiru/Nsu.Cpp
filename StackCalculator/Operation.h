#pragma once

#include <cmath>
#include <iostream>
#include <list>
#include <string>
#include "Context.h"

class Operation {
public:
    virtual void run(const std::list<std::string> &args, Context &context) = 0;
    virtual ~Operation() = default;
};
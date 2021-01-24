#pragma once
#include <iostream>
#include <utility>
#include <list>
#include "ExecutionContext.h"

class Operation {
public:
    virtual void run(const std::list<std::string> &args, ExecutionContext &context) = 0;

    virtual ~Operation() = default;
};
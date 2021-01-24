#pragma once

#include "Context.h"

class Calculator {
private:
    Context context;
public:
    Calculator();
    ~Calculator();
    void calculate(std::istream &stream);
};
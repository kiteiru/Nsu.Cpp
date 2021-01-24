#include "Division.h"
#include "../OperationMaker.h"
#include "../Exceptions.h"

namespace {DETECT_CALCULATOR_OPERATION(Division, "/")}

void Division::run(const std::list<std::string> &args, Context &context) {
    if (!args.empty() || context.stackSize() != 2) {
        throw OperandException();
    }
    double divisor = context.pop();
    double divisible = context.pop();
    if (divisor == 0) {
        throw DivisionByZeroException();
    }
    double divideResult = divisible / divisor;
    context.push(divideResult);
}
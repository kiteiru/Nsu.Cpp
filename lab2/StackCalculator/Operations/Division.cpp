#include "Division.h"
#include "../DetectCalculatorOperation.h"
#include "../CalledExceptions.h"

namespace {DETECT_CALCULATOR_OPERATION(Division, "/")}

void Division::run(const std::list<std::string> &args, ExecutionContext &context) {
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
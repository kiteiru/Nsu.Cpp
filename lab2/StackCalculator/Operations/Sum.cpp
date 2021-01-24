#include "Sum.h"
#include "../DetectCalculatorOperation.h"
#include "../CalledExceptions.h"

namespace {DETECT_CALCULATOR_OPERATION(Sum, "+")}

void Sum::run(const std::list<std::string> &args, ExecutionContext &context) {
    if (context.stackSize() != 2) {
        throw OperandException();
    }
    double firstSummand = context.pop();
    double secondSummand = context.pop();
    double summariseResult = firstSummand + secondSummand;
    context.push(summariseResult);
}
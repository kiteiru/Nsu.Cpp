#include "Sum.h"
#include "../DetectCalculatorOperation.h"
#include "../CalledExceptions.h"

namespace {DETECT_CALCULATOR_OPERATION(Sum, "+")}

void Sum::run(const std::list<std::string> &args, ExecutionContext &context) {
    if (context.SizeOfStack() != 2) {
        throw OperandException();
    }
    double firstSummand = context.PopFromStack();
    double secondSummand = context.PopFromStack();
    double summariseResult = firstSummand + secondSummand;
    context.PushToStack(summariseResult);
}
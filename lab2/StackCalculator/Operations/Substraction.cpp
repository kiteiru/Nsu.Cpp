#include "Substraction.h"
#include "../DetectCalculatorOperation.h"
#include "../CalledExceptions.h"

namespace {DETECT_CALCULATOR_OPERATION(Substraction, "-")}

void Substraction::run(const std::list<std::string> &args, ExecutionContext &context) {
    if (context.stackSize() != 2) {
        throw OperandException();
    }
    double subtrahend = context.pop();
    double minuend = context.pop();
    double substractResult = minuend - subtrahend;
    context.push(substractResult);
}
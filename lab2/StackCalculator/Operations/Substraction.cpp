#include "Substraction.h"
#include "../DetectCalculatorOperation.h"
#include "../CalledExceptions.h"

namespace {DETECT_CALCULATOR_OPERATION(Substraction, "-")}

void Substraction::run(const std::list<std::string> &args, ExecutionContext &context) {
    if (context.SizeOfStack() != 2) {
        throw OperandException();
    }
    double subtrahend = context.PopFromStack();
    double minuend = context.PopFromStack();
    double substractResult = minuend - subtrahend;
    context.PushToStack(substractResult);
}
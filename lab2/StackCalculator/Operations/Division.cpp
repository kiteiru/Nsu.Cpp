#include "Division.h"
#include "../OperationCreatorImpl.h"
#include "../CalledExceptions.h"

namespace {REGISTER_OPERATION(Division, "/")}

void Division::run(const std::list<std::string> &args, ExecutionContext &context) {
    if (!args.empty() || context.SizeOfStack() < 2) {
        throw OperandException();
    }
    double divisor = context.PopFromStack();
    double divisible = context.PopFromStack();
    if (divisor == 0) {
        throw DivisionByZeroException();
    }
    double divideResult = divisible / divisor;
    context.PushToStack(divideResult);
}
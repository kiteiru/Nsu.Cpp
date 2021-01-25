#include "Multiplication.h"
#include "../OperationCreatorImpl.h"
#include "../CalledExceptions.h"

namespace {REGISTER_OPERATION(Multiplication, "*")}

void Multiplication::run(const std::list<std::string> &args, ExecutionContext &context) {
    if (!args.empty() || context.SizeOfStack() < 2) {
        throw OperandException();
    }
    double multipleResult = context.PopFromStack() * context.PopFromStack();
    context.PushToStack(multipleResult);
}
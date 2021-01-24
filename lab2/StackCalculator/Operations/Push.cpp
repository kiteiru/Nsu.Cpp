#include "Push.h"
#include "../OperationCreator.h"
#include "../CalledExceptions.h"

namespace {REGISTER_OPERATION(Push, "PUSH")}

void Push::run(const std::list<std::string> &args, ExecutionContext &context) {
    if (args.size() != 1) {
        throw OperandException();
    }
    std::string variable = args.back();
    if (context.CheckOnVariableExistence(variable)) {
        context.PushToStack(context.GetVariable(variable));
    }
    else {
        context.PushToStack(std::stod(variable));
    }
}

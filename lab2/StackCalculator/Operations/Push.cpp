#include "Push.h"
#include "../OperationMaker.h"
#include "../Exceptions.h"

namespace {DETECT_CALCULATOR_OPERATION(Push, "PUSH")}

void Push::run(const std::list<std::string> &args, Context &context) {
    if (args.size() > 1 || args.empty()) {
        throw OperandException();
    }
    std::string variable = args.back();
    if (context.variableExists(variable)) {
        context.push(context.getVariable(variable));
    }
    else {
        context.push(std::stod(variable));
    }
}

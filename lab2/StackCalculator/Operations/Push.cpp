#include "Push.h"
#include "../DetectCalculatorOperation.h"
#include "../CalledExceptions.h"

namespace {DETECT_CALCULATOR_OPERATION(Push, "PUSH")}

void Push::run(const std::list<std::string> &args, ExecutionContext &context) {
    if (args.size() != 1) {
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

#include "Define.h"
#include "../DetectCalculatorOperation.h"
#include "../CalledExceptions.h"

namespace {DETECT_CALCULATOR_OPERATION(Define, "DEFINE")}

void Define::run(const std::list<std::string> &args, ExecutionContext &context){
    if (args.size() != 2) {
        throw OperandException();
    }
    std::string variable = args.front();
    double definition = std::stod(args.back());
    context.addVariable(variable, definition);
}

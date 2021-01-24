#include "Pop.h"
#include "../DetectCalculatorOperation.h"
#include "../CalledExceptions.h"

namespace {DETECT_CALCULATOR_OPERATION(Pop, "POP")}

void Pop::run(const std::list<std::string> &args, ExecutionContext &context) {
    if (context.CheckStackOnEmptiness()) {
        throw StackEmptinessException();
    }
    context.PopFromStack();
}
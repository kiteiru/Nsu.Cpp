#include "Pop.h"
#include "../OperationMaker.h"
#include "../Exceptions.h"

namespace {DETECT_CALCULATOR_OPERATION(Pop, "POP")}

void Pop::run(const std::list<std::string> &args, Context &context) {
    if (!args.empty()) {
        throw OperandException();
    }
    if (context.stackIsEmpty()) {
        throw StackEmptinessException();
    }
    context.pop();
}
#include "Pop.h"
#include "../OperationCreator.h"
#include "../CalledExceptions.h"

namespace {REGISTER_OPERATION(Pop, "POP")}

void Pop::run(const std::list<std::string> &args, ExecutionContext &context) {
    if (context.CheckStackOnEmptiness()) {
        throw StackEmptinessException();
    }
    context.PopFromStack();
}
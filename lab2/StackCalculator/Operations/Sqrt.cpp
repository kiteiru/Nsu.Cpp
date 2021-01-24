#include <cmath>
#include "Sqrt.h"
#include "../OperationCreatorImpl.h"
#include "../CalledExceptions.h"

namespace {REGISTER_OPERATION(Sqrt, "SQRT")}

void Sqrt::run(const std::list<std::string> &args, ExecutionContext &context) {
    if (context.CheckStackOnEmptiness()) {
        throw StackEmptinessException();
    }
    context.PushToStack(sqrt(context.PopFromStack()));
}
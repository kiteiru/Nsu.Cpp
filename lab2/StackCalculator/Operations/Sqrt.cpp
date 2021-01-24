#include <cmath>
#include "Sqrt.h"
#include "../OperationMaker.h"
#include "../Exceptions.h"

namespace {DETECT_CALCULATOR_OPERATION(Sqrt, "SQRT")}

void Sqrt::run(const std::list<std::string> &args, Context &context) {
    if (context.stackIsEmpty()) {
        throw StackEmptinessException();
    }
    context.push(sqrt(context.pop()));
}
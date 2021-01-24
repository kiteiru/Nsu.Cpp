#include <cmath>
#include "Sqrt.h"
#include "../DetectCalculatorOperation.h"
#include "../CalledExceptions.h"

namespace {DETECT_CALCULATOR_OPERATION(Sqrt, "SQRT")}

void Sqrt::run(const std::list<std::string> &args, ExecutionContext &context) {
    if (context.stackIsEmpty()) {
        throw StackEmptinessException();
    }
    context.push(sqrt(context.pop()));
}
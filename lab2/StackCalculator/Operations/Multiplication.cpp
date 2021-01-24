#include "Multiplication.h"
#include "../DetectCalculatorOperation.h"
#include "../CalledExceptions.h"

namespace {DETECT_CALCULATOR_OPERATION(Multiplication, "*")}

void Multiplication::run(const std::list<std::string> &args, ExecutionContext &context) {
    if (!args.empty() || context.stackSize() != 2) {
        throw OperandException();
    }
    double multipleResult = context.pop() * context.pop();
    context.push(multipleResult);
}
#include "Multiplication.h"
#include "../OperationMaker.h"
#include "../Exceptions.h"

namespace {DETECT_CALCULATOR_OPERATION(Multiplication, "*")}

void Multiplication::run(const std::list<std::string> &args, Context &context) {
    if (!args.empty() || context.stackSize() != 2) {
        throw OperandException();
    }
    double multipleResult = context.pop() * context.pop();
    context.push(multipleResult);
}
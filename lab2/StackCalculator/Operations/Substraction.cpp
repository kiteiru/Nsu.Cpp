#include "Substraction.h"
#include "../OperationMaker.h"
#include "../Exceptions.h"

namespace {DETECT_CALCULATOR_OPERATION(Substraction, "-")}

void Substraction::run(const std::list<std::string> &args, Context &context) {
    if (context.stackSize() != 2) {
        throw OperandException();
    }
    double subtrahend = context.pop();
    double minuend = context.pop();
    double substractResult = minuend - subtrahend;
    context.push(substractResult);
}
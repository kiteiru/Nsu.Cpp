#include "Sum.h"
#include "../OperationMaker.h"
#include "../Exceptions.h"

namespace {ADD_OPERATION(Sum, "+")}

void Sum::run(const std::list<std::string> &args, Context &context) {
    if (context.stackSize() < 2) {
        throw badArgsException("Not enough operands for '+'");
    }
    if (!args.empty()) {
        throw badArgsException("Too much arguments for '+'");
    }
    double sum = context.pop() + context.pop();
    context.push(sum);
}
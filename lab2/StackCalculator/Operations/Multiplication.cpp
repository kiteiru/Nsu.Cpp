#include "Multiplication.h"
#include "../OperationMaker.h"
#include "../Exceptions.h"

void Multiplication::run(const std::list<std::string> &args, Context &context) {
    if (context.stackSize() < 2) {
        throw badArgsException();
    }
    if (!args.empty()) {
        throw badArgsException();
    }
    double mul = context.pop() * context.pop();
    context.push(mul);
}

ADD_OPERATION(Multiplication, *)
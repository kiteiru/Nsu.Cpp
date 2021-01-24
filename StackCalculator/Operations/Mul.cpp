#include "Mul.h"
#include "../OperationMaker.h"
#include "../Exceptions.h"

void Mul::run(const std::list<std::string> &args, Context &context) {
    if (!args.empty() || context.stackSize() < 2) {
        throw badArgsException();
    }
    double mul = context.pop() * context.pop();
    context.push(mul);
};

ADD_OPERATION(Mul, *)
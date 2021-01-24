#include "Sum.h"
#include "../OperationMaker.h"
#include "../Exceptions.h"


void Sum::run(const std::list<std::string> &args, Context &context) {
    if (context.stackSize() < 2 || !args.empty()) {
        throw badArgsException();
    }
    double sum = context.pop() + context.pop();
    context.push(sum);
}

ADD_OPERATION(Sum, +)
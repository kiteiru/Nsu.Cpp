#include "Sub.h"
#include "../OperationMaker.h"
#include "../Exceptions.h"


void Sub::run(const std::list<std::string> &args, Context &context) {
    if (context.stackSize() < 2 || !args.empty()) {
        throw badArgsException();
    }
    double num1 = context.pop();
    double num2 = context.pop();
    double sub = num2 - num1;
    context.push(sub);
}

ADD_OPERATION(Sub, -)
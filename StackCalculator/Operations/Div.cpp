#include "Div.h"
#include "../OperationMaker.h"
#include "../Exceptions.h"


void Div::run(const std::list<std::string> &args, Context &context) {
    if (context.stackSize() < 2 || !args.empty()) {
        throw badArgsException();
    }
    double num1 = context.pop();
    double num2 = context.pop();
    if (num1 == 0) {
        throw divisionByZeroException();
    }
    context.push(num2 / num1);
}

ADD_OPERATION(Div, /)
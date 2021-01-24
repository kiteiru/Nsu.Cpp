#include "Print.h"
#include "../OperationMaker.h"
#include "../Exceptions.h"

void Print::run(const std::list<std::string> &args, Context &context) {
    if (context.stackSize() == 0) {
        throw emptyStackException();
    }
    double num = context.top();
    std::cout << num << std::endl;
}

ADD_OPERATION(Print, PRINT)
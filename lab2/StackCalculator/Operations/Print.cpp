#include "Print.h"
#include "../OperationMaker.h"
#include "../Exceptions.h"

namespace {DETECT_CALCULATOR_OPERATION(Print, "PRINT")}

void Print::run(const std::list<std::string> &args, Context &context) {
    if (context.stackSize() == 0) {
        throw StackEmptinessException();
    }
    double printNumber = context.top();
    std::cout << printNumber << std::endl;
}

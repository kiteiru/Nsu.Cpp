#include "Print.h"
#include "../DetectCalculatorOperation.h"
#include "../CalledExceptions.h"

namespace {DETECT_CALCULATOR_OPERATION(Print, "PRINT")}

void Print::run(const std::list<std::string> &args, ExecutionContext &context) {
    if (context.stackSize() == 0) {
        throw StackEmptinessException();
    }
    double printNumber = context.top();
    std::cout << printNumber << std::endl;
}

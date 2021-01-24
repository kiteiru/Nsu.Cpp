#include "Print.h"
#include "../DetectCalculatorOperation.h"
#include "../CalledExceptions.h"

namespace {DETECT_CALCULATOR_OPERATION(Print, "PRINT")}

void Print::run(const std::list<std::string> &args, ExecutionContext &context) {
    if (context.SizeOfStack() == 0) {
        throw StackEmptinessException();
    }
    double printNumber = context.GetStackTop();
    std::cout << printNumber << std::endl;
}

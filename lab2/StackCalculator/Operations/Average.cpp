#include "Define.h"
#include "../OperationCreatorImpl.h"
#include "../CalledExceptions.h"

namespace {REGISTER_OPERATION(Average, "AVERAGE")}

void Average::run(const std::list<std::string> &args, ExecutionContext &context){
    if (args.size() != 1) {
        throw BadArgumentsException();
    }
    int integerArgs = stoi(args);
    if (integerArgs > context.SizeOfStack()) {
        throw ImpossibleToFindAverage();
    }
    double average = 0;
    int amountOfElements = integerArgs;
    while(amountOfElements != 0) {
        average += context.PopFromStack();
        amountOfElements--;
    }
    average /= integerArgs;
    context.PushToStack(average);
}


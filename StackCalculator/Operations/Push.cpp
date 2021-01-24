#include "Push.h"
#include "../OperationMaker.h"
#include "../Exceptions.h"


void Push::run(const std::list<std::string> &args, Context &context) {
    if (args.empty() || args.size() > 1) {
        throw badArgsException();
    }
    std::string variable = args.back();
    if (context.variableExists(variable)) {
        context.push(context.getVariable(variable));
    }
    else {
        context.push(std::stod(variable));
    }
}

ADD_OPERATION(Push, PUSH)
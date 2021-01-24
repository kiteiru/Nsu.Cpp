#include "Define.h"
#include "../OperationMaker.h"
#include "../Exceptions.h"

void Define::run(const std::list<std::string> &args, Context &context){
    if (args.size() != 2) {
        throw badArgsException("Not enough arguments for 'DEFINE'");
    }
    std::string variable = args.front();
    double value = std::stod(args.back());
    context.addVariable(variable, value);
}

ADD_OPERATION(Define, DEFINE)
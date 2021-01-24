#include "Pop.h"
#include "../OperationMaker.h"
#include "../Exceptions.h"

void Pop::run(const std::list<std::string> &args, Context &context){
    if (!args.empty()) {
        throw badArgsException();
    }
    if (context.stackIsEmpty()) {
        throw emptyStackException();
    }
    context.pop();
}

ADD_OPERATION(Pop, POP)
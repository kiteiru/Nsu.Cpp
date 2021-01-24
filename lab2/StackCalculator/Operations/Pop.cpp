#include "Pop.h"
#include "../OperationMaker.h"
#include "../Exceptions.h"


    void Pop::run(const std::list<std::string> &args, Context &context) {
        if (!args.empty()) {
            throw badArgsException("Too much arguments for 'POP'");
        }
        if (context.stackIsEmpty()) {
            throw emptyStackException("POP: Stack is empty");
        }
        context.pop();
    }


ADD_OPERATION(Pop, POP)
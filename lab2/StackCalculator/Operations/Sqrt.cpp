#include <cmath>
#include "Sqrt.h"
#include "../OperationMaker.h"
#include "../Exceptions.h"

    void Sqrt::run(const std::list<std::string> &args, Context &context) {
        if (context.stackIsEmpty()) {
            throw badArgsException("No operand for 'SQRT'");
        }
        if (!args.empty()){
            throw badArgsException("Too much arguments for 'SQRT'");
        }
        context.push(sqrt(context.pop()));
    }


ADD_OPERATION(Sqrt, SQRT)
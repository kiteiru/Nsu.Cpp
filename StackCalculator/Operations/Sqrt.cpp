#include <cmath>
#include "Sqrt.h"
#include "../OperationMaker.h"
#include "../Exceptions.h"

void Sqrt::run(const std::list<std::string> &args, Context &context) {
    if (context.stackIsEmpty() || !args.empty()) {
        throw badArgsException();
    }
    context.push(sqrt(context.pop()));
}

ADD_OPERATION(Sqrt, SQRT)
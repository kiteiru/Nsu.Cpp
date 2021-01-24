#include "ExecutionContext.h"

double ExecutionContext::getVariable(const std::string &variable) {
    return variables.at(variable);
}

double ExecutionContext::top() {
    return stack.top();
}

double ExecutionContext::pop() {
    double num = stack.top();
    stack.pop();
    return num;
}

void ExecutionContext::push(double num) {
    stack.push(num);
}

bool ExecutionContext::stackIsEmpty() {
    return stack.empty();
}

int ExecutionContext::stackSize() {
    return stack.size();
}

void ExecutionContext::addVariable(const std::string &key, double definition) {
    variables[key] = definition;
}

bool ExecutionContext::variableExists(const std::string &key) {
    return variables.find(key) != variables.end();
}
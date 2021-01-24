#pragma once
#include <stack>
#include <string>
#include <map>

class ExecutionContext {
    std::stack<double> stack;
    std::map<std::string, double> variables;
public:
    double GetStackTop() {
        return stack.top();
    }

    int SizeOfStack() {
        return stack.size();
    }

    double PopFromStack() {
        double num = stack.top();
        stack.pop();
        return num;
    }

    void PushToStack(double num) {
        stack.push(num);
    }

    bool CheckStackOnEmptiness() {
        return stack.empty();
    }

    bool CheckOnVariableExistence(const std::string &key) {
        return variables.find(key) != variables.end();
    }

    double GetVariable(const std::string &variable) {
        return variables.at(variable);
    }

    void AddVariable(const std::string &key, double definition) {
        variables[key] = definition;
    }
};
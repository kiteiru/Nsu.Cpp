#pragma once

#include <stack>
#include <string>
#include <map>

class Context {
    std::stack<double> stack;
    std::map<std::string, double> variables;
public:
    double getVariable(const std::string &variable) {
        return variables.at(variable);
    }

    double top() {
        return stack.top();
    }

    void push(double num) {
        stack.push(num);
    }

    double pop() {
        double num = stack.top();
        stack.pop();
        return num;
    }

    int stackSize() {
        return stack.size();
    }

    bool stackIsEmpty() {
        return stack.empty();
    }

    void addVariable(const std::string &key, double num) {
        variables[key] = num;
    }

    bool variableExists(const std::string &key) {
        return variables.find(key) != variables.end();
    }
};
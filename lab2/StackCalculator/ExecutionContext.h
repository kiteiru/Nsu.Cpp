#include <stack>
#include <map>

class ExecutionContext {
    std::stack<double> stack;
    std::map<std::string, double> variables;
public:
    double getVariable(const std::string &variable);
    double top();
    double pop();
    void push(double num);
    bool stackIsEmpty();
    int stackSize();
    void addVariable(const std::string &key, double definition);
    bool variableExists(const std::string &key);
};
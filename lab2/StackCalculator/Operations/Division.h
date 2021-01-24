#include "../CalculatorOperation.h"

class Division : public CalculatorOperation {
public:
    void run(const std::list<std::string> &args, ExecutionContext &context) override;
};
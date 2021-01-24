#include "../CalculatorOperation.h"

class Multiplication : public CalculatorOperation {
public:
    void run(const std::list<std::string> &args, ExecutionContext &context) override;
};
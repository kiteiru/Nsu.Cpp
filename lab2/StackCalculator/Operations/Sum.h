#include "../CalculatorOperation.h"

class Sum : public CalculatorOperation {
public:
    void run(const std::list<std::string> &args, ExecutionContext &context) override;
};
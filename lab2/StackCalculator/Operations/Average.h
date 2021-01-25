#include "../CalculatorOperation.h"

class Average : public CalculatorOperation {
public:
    void run(const std::list<std::string> &args, ExecutionContext &context) override;
};
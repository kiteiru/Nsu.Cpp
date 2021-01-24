#include "../CalculatorOperation.h"

class Pop : public CalculatorOperation {
public:
    void run(const std::list<std::string> &args, ExecutionContext &context) override;
};
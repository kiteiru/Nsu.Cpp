#include "../CalculatorOperation.h"

class Define : public CalculatorOperation {
public:
    void run(const std::list<std::string> &args, ExecutionContext &context) override;
};
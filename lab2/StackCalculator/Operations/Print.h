#include "../CalculatorOperation.h"

class Print : public CalculatorOperation {
public:
    void run(const std::list<std::string> &args, ExecutionContext &context) override;
};
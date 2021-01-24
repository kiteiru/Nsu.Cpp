#include "../Operation.h"

class Multiplication : public Operation {
public:
    void run(const std::list<std::string> &args, ExecutionContext &context) override;
};
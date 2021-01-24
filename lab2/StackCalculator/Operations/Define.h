#include "../Operation.h"

class Define : public Operation {
public:
    void run(const std::list<std::string> &args, ExecutionContext &context) override;
};
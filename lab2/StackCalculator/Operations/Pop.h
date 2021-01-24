#include "../Operation.h"

class Pop : public Operation {
public:
    void run(const std::list<std::string> &args, ExecutionContext &context) override;
};
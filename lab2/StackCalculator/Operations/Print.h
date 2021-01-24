#include "../Operation.h"

class Print : public Operation {
public:
    void run(const std::list<std::string> &args, ExecutionContext &context) override;
};
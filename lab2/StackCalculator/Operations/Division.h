#include "../Operation.h"

class Division : public Operation {
public:
    void run(const std::list<std::string> &args, Context &context) override;
};
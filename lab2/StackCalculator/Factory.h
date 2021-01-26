#pragma once
#include <memory>
#include "CalculatorOperation.h"
#include "OperationCreator.h"
#include "OperationCreatorImpl.h"
#include "CalledExceptions.h"

class Factory {
private:
    Factory() = default;
    std::map<std::string, OperationCreator*> operationMakers;
public:
    Factory(const Factory &) = delete;

    static Factory &getInstance() {
        static Factory factory;
        return factory;
    }

    [[nodiscard]] std::unique_ptr<CalculatorOperation> operationGetting(std::string &operationName) const {
        auto i = operationMakers.find(operationName);
        if (i == operationMakers.end()) {
            throw OperationException();
        }
        OperationCreator* operationMaker = i->second;
        return std::unique_ptr<CalculatorOperation>(operationMaker->make());
    }

    void RegisterMaker(const std::string &key, OperationCreator* maker) {
        operationMakers[key] = maker;
    }
};

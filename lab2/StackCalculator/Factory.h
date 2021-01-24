#pragma once
#include "CalculatorOperation.h"
#include "OperationInterface.h"
#include "OperationCreator.h"
#include "CalledExceptions.h"

class Factory {
private:
    Factory() = default;
    std::map<std::string, OperationInterface*> operationMakers;
public:
    Factory(const Factory &) = delete;

    static Factory &getInstance() {
        static Factory factory;
        return factory;
    }

    [[nodiscard]] std::unique_ptr<CalculatorOperation> getOperation(std::string &operationName) const {
        auto i = operationMakers.find(operationName);
        if (i == operationMakers.end()) {
            throw OperandException();
        }
        OperationInterface* operationMaker = i->second;
        return std::unique_ptr<CalculatorOperation>(operationMaker->make());
    }

    void RegisterMaker(const std::string &key, OperationInterface* maker) {
        operationMakers[key] = maker;
    }
};
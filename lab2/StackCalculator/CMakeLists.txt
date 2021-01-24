cmake_minimum_required(VERSION 3.15)
project(StackCalculator)

set(CMAKE_CXX_STANDARD 17)

add_executable(StackCalculator main.cpp OperationCreatorImpl.h OperationCreator.h CalculatorOperation.h Factory.h CalledExceptions.h ExecutionContext.h Calculator.h Calculator.cpp Operations/Define.cpp Operations/Division.cpp Operations/Multiplication.cpp Operations/Pop.cpp Operations/Print.cpp Operations/Push.cpp Operations/Sqrt.cpp Operations/Substraction.cpp Operations/Sum.cpp Operations/Define.h Operations/Division.h Operations/Pop.h Operations/Multiplication.h Operations/Print.h Operations/Push.h Operations/Sqrt.h Operations/Substraction.h Operations/Sum.h)
cmake_minimum_required(VERSION 3.15)
project(StackCalculator)

set(CMAKE_CXX_STANDARD 17)

add_executable(StackCalculator main.cpp OperationMaker.h OperationInterface.h Operation.h Factory.h Exceptions.h Context.h Calculator.h Calculator.cpp Operations/Define.cpp Operations/Div.cpp Operations/Mul.cpp Operations/Pop.cpp Operations/Print.cpp Operations/Push.cpp Operations/Sqrt.cpp Operations/Sub.cpp Operations/Sum.cpp Operations/Mul.h Operations/Define.h Operations/Div.h Operations/Sum.h Operations/Sub.h Operations/Sqrt.h Operations/Pop.h Operations/Print.h Operations/Push.h)
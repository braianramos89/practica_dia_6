cmake_minimum_required(VERSION 3.22)
project(Templatecpp)

set(CMAKE_CXX_STANDARD 14)

add_executable(Templatecpp main.cpp Cuenta.cpp Cuenta.h CuentaAhorro.cpp CuentaAhorro.h CuentaCorriente.cpp CuentaCorriente.h)

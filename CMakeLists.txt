cmake_minimum_required(VERSION 3.28)
project(EldenRingBuff)

set(CMAKE_CXX_STANDARD 17)

# Create a shared library (DLL)
add_library(EldenRingBuff SHARED main.cpp)

# Add any necessary libraries here, for example:
# target_link_libraries(EldenRingBuff some_library)

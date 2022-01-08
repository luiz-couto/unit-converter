cmake_minimum_required(VERSION 3.10)
 

#############################
# Unit Converter
#############################
project(unitconverter)

add_library(unitconverter INTERFACE)

target_include_directories(unitconverter INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/lib)


#############################
# Tests
#############################

enable_testing()

# Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})
 
include(CTest)

project(unitconvertertest)

add_executable(unitconvertertest ${CMAKE_CURRENT_SOURCE_DIR}/tests/UnitConverter.cpp)

target_link_libraries(unitconvertertest unitconverter ${GTEST_LIBRARIES} pthread)
add_test(NAME unitconvertertest COMMAND unitconvertertest)

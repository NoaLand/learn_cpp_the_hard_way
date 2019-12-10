cmake_minimum_required(VERSION 3.15)

project(learn_cpp_the_hard_way CXX)
set(CMAKE_CXX_STANDARD 20)
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Xclang -fconcepts-ts")

add_executable(
        learn_cpp_the_hard_way
        #        chapter2/myfirst.cpp
        #        chapter2/carrots.cpp
        #        chapter2/getinfo.cpp
        #        chapter2/sqrt.cpp
        #        chapter2/ourfunc.cpp
        #        chapter2/convert.cpp
        #        chapter4/union_test.cpp
        #        chapter4/pointer.cpp
        #        chapter6/cctypes.cpp
        #        mutex/MutexLock.cpp
        #        mutex/no_lock.cpp
        #        template/my_template.cpp
        #        my_test/googletest/my_first_google_test.cpp
        #        my_idea/my_lambda_1/my_lambda.cpp
        #        my_idea/thread_communication/example_from_outside.cpp
        #        my_idea/function_ptr/function_as_input.cpp
        my_idea/compare/get_value.cpp
)

include_directories(my_test)
include_directories(my_idea)

add_subdirectory(my_idea)

enable_testing()
add_subdirectory(my_test)

add_library(my_idea "" my_lambda_1/my_lambda.cpp [NOT_WORKING_NOW]game_engine_with_concept_in_cpp_20/component_base.cpp [NOT_WORKING_NOW]game_engine_with_concept_in_cpp_20/concept_in_tick_tock_engine.cpp [NOT_WORKING_NOW]game_engine_with_concept_in_cpp_20/example_code.cpp thread_communication/example_from_outside.cpp function_ptr/function_as_input.cpp compare/get_value.cpp compare/get_value.h)

target_sources(
        my_idea
        PRIVATE
        my_clazz_1/my_clazz_1.cpp
        my_lambda_1/my_lambda.cpp
        thread_communication/example_from_outside.cpp
        PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}/my_clazz_1/my_clazz_1.h
)

target_include_directories(
        my_idea
        PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}
)


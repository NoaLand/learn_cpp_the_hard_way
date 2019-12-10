#include "gtest/gtest.h"
#include "my_clazz_1/my_clazz_1.h"
#include "test_util.h"

TEST(example, add) {
    double res = add_numbers(1.0, 2.0);
    ASSERT_NEAR(res, 3.0, 1.0e-11);
}

TEST(student, should_set_score_successfully) {
    auto stu = student(1);
    stu.set_score(100);
    ASSERT_EQ(stu.get_score(), 100);
    ASSERT_EQ(stu.id, 1);
}

TEST(divide_numbers, should_throw_exception_when_divided_by_zero) {
    ASSERT_THROW_WITH_MESSAGE({
                                  divide_numbers(1.0, 0);
                              },
                              InvalidParamException,
                              info,
                              "should not be divided by 0")
}

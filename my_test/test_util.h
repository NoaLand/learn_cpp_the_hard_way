#ifndef LEARN_CPP_THE_HARD_WAY_TEST_UTIL_H
#define LEARN_CPP_THE_HARD_WAY_TEST_UTIL_H

#define ASSERT_THROW_WITH_MESSAGE(statement, exception_type, method, message) \
try { \
    statement \
    FAIL(); \
} catch (exception_type& e) { \
    ASSERT_EQ(e.method(), message); \
}


class InvalidParamException : public exception {
public:
    explicit InvalidParamException(string ex) {
        this->error = ex;
    }

    [[nodiscard]] string info() const noexcept {
        return this->error;
    }

private:
    string error;
};
#endif //LEARN_CPP_THE_HARD_WAY_TEST_UTIL_H

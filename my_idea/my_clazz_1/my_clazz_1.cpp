#include <string>
#include "my_clazz_1.h"
using namespace std;

int student::get_score() {
    return this->score;
}

void student::set_score(int s) {
    this->score = s;
}

double add_numbers(double a, double b) {
    return a + b;
}

double divide_numbers(double a, double b) {
//    if (b == 0) {
//        throw InvalidParamException("should not be divided by 0");
//    }

    return a / b;
}


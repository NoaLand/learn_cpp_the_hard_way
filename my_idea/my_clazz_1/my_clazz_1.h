#pragma once
#ifndef LEARN_CPP_THE_HARD_WAY_MY_CLAZZ_1_H
#define LEARN_CPP_THE_HARD_WAY_MY_CLAZZ_1_H

#include <exception>
#include <string>

using namespace std;

double add_numbers(double, double);
double divide_numbers(double, double);

class student {
public:
    int id;

    explicit student(int id) {
        this->id = id;
    }

    int get_score();

    void set_score(int s);

private:
    int score = 0;
};
#endif

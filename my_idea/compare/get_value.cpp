#include <iostream>
#include <ctime>
#include "get_value.h"

using namespace std;

clock_t explicit_start, explicit_end;
clock_t in_loop_implicit_bool_start, in_loop_implicit_bool_end;
clock_t out_loop_implicit_bool_start, out_loop_implicit_bool_end;
clock_t in_loop_implicit_void_start, in_loop_implicit_void_end;
clock_t out_loop_implicit_void_start, out_loop_implicit_void_end;

const int RUN_TIME = 100000000;
const int SCALE = 1000;

double cal_explicit_time() {
    klazz k = klazz(10);
    explicit_start = clock();
    for (int index = 0; index < RUN_TIME; index++) {
        int userId = 0;
       userId = k.i_getId();
    }
    explicit_end = clock();
    return (double) (explicit_end - explicit_start) / CLOCKS_PER_SEC * SCALE;
}

double cal_in_loop_implicit_bool_time() {
    klazz k = klazz(10);
    in_loop_implicit_bool_start = clock();
    for (int index = 0; index < RUN_TIME; index++) {
        int userId = 0;
        k.b_getId(userId);
    }
    in_loop_implicit_bool_end = clock();
    return (double) (in_loop_implicit_bool_end - in_loop_implicit_bool_start) / CLOCKS_PER_SEC * SCALE;
}

double cal_out_loop_implicit_bool_time() {
    int userId = 0;
    klazz k = klazz(10);
    out_loop_implicit_bool_start = clock();
    for (int index = 0; index < RUN_TIME; index++) {
        k.b_getId(userId);
    }
    out_loop_implicit_bool_end = clock();
    return (double) (out_loop_implicit_bool_end - out_loop_implicit_bool_start) / CLOCKS_PER_SEC * SCALE;
}

double cal_in_loop_implicit_void_time() {
    klazz k = klazz(10);
    in_loop_implicit_void_start = clock();
    for (int index = 0; index < RUN_TIME; index++) {
        int userId = 0;
        k.v_getId(userId);
    }
    in_loop_implicit_void_end = clock();
    return (double) (in_loop_implicit_void_end - in_loop_implicit_void_start) / CLOCKS_PER_SEC * SCALE;
}

double cal_out_loop_implicit_void_time() {
    int userId = 0;

    klazz k = klazz(10);
    out_loop_implicit_void_start = clock();
    for (int index = 0; index < RUN_TIME; index++) {
        k.v_getId(userId);
    }
    out_loop_implicit_void_end = clock();
    return (double) (out_loop_implicit_void_end - out_loop_implicit_void_start) / CLOCKS_PER_SEC * SCALE;
}


int main() {

    double explicit_time = cal_explicit_time();
    double in_loop_implicit_bool_time = cal_in_loop_implicit_bool_time();
    double in_loop_implicit_void_time = cal_in_loop_implicit_void_time();
    double out_loop_implicit_bool_time = cal_out_loop_implicit_bool_time();
    double out_loop_implicit_void_time = cal_out_loop_implicit_void_time();

    cout << "explicit assignment time: " << explicit_time << endl;
    cout << "in loop return bool implicit assignment time: " << in_loop_implicit_bool_time << endl;
    cout << "in loop return void implicit assignment time: " << in_loop_implicit_void_time << endl;
    cout << "out loop return bool implicit assignment time: " << out_loop_implicit_bool_time << endl;
    cout << "out loop return void implicit assignment time: " << out_loop_implicit_void_time << endl;

    return 0;
}


void klazz::v_getId(int &userId) {
    userId = this->id;
}

bool klazz::b_getId(int &userId) {
    userId = this->id;

    return true;
}

int klazz::i_getId() {
    return this->id;
}

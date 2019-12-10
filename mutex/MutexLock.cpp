#include <iostream>
#include <thread>
#include <mutex>
#include <map>

using namespace std;

std::map<std::string, int> my_map;

std::mutex counter_mutex;

void change_a(int new_a) {
//    counter_mutex.lock();
    if (my_map["b"] != 0) {
        my_map["a"] = my_map["b"];
    } else if (my_map["c"] != 0) {
        my_map["a"] = my_map["c"];
    } else {
        my_map["a"] = new_a;
    }

    cout << "change a" << endl;
//    counter_mutex.unlock();
}

void change_b(int new_b) {
//    counter_mutex.lock();
    if (my_map["a"] != 0) {
        my_map["b"] = my_map["a"];
    } else if (my_map["c"] != 0) {
        my_map["b"] = my_map["c"];
    } else {
        my_map["b"] = new_b;
    }

    cout << "change b" << endl;
//    counter_mutex.unlock();
}

void change_c(int new_c) {
//    counter_mutex.lock();
    if (my_map["a"] != 0) {
        my_map["c"] = my_map["a"];
    } else if (my_map["b"] != 0) {
        my_map["c"] = my_map["b"];
    } else {
        my_map["c"] = new_c;
    }

    cout << "change c" << endl;
//    counter_mutex.unlock();
}

int main(int argc, char *argv[]) {
    thread a_th(change_a, 9);
    thread b_th(change_b, 10);
    thread c_th(change_c, 11);
    a_th.join();
    b_th.join();
    c_th.join();
//    thread t([] {
//        change_a(9);
//        change_b(10);
//        change_c(11);
//    });

    cout << "finish" << endl;

//    cout << "A: " << my_map["a"] << endl;
//    cout << "B: " << my_map["b"] << endl;
//    cout << "C: " << my_map["c"] << endl;
}
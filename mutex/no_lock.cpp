#include <iostream>
#include <thread>
#include <map>

using namespace std;

map<string, int> my_map;
map<string[], int[]> result;

void change_a(int new_a) {
//    my_map["a"] = new_a;
//    if (my_map["b"] != 0) {
//        my_map["a"] = my_map["b"];
//    } else if (my_map["c"] != 0) {
//        my_map["a"] = my_map["c"];
//    }

    cout << "change a" << endl;
}

void change_b(int new_b) {
    my_map["b"] = new_b;
    if (my_map["a"] != 0) {
        my_map["b"] = my_map["a"];
    } else if (my_map["c"] != 0) {
        my_map["b"] = my_map["c"];
    }

    cout << "change b" << endl;
}

void change_c(int new_c) {
    my_map["c"] = new_c;
    if (my_map["a"] != 0) {
        my_map["c"] = my_map["a"];
    } else if (my_map["b"] != 0) {
        my_map["c"] = my_map["b"];
    }

    cout << "change c" << endl;
}

int main(int argc, char *argv[]) {
    thread a_th(change_a, 9);
    thread b_th(change_b, 10);
//    thread c_th(change_c, 11);
    a_th.join();
    b_th.join();
//    c_th.join();

    cout << "finish" << endl;

    cout << "A: " << my_map["a"] << endl;
    cout << "B: " << my_map["b"] << endl;
//    cout << "C: " << my_map["c"] << endl;
}
#include <iostream>

using namespace std;

int add(int a, int b) {
    return a + b;
}

int function_as_input(int (*add_ex)(int, int), int x, int y) {
    return (*add_ex)(x, y);
}

//int function_as_input(auto fn, auto x, auto y) {
//    return (int) x + y;
//}

int main() {
    cout << function_as_input(add, 10, 20) << endl;
    cout << function_as_input(add, 1, 2) << endl;
    return 0;
}

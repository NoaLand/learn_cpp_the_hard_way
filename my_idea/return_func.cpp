#include <iostream>

using namespace std;

int test_a(int a);

int test_a(int a) {
    return a + 1;
}

int (*my_test_return_func())(int) {
    return test_a;
}

int main() {
    cout << my_test_return_func()(120) << endl;

    return 0;
}


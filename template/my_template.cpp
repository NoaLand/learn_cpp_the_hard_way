#include <iostream>

using namespace std;

template <class AnyType>
void Swap(AnyType &a, AnyType &b) {
    AnyType ir = a;
    a = b;
    b = ir;
}

template <typename T>
void newSwap(T &a, T &b) {
    T tmp(std::move(a));
    a = std::move(b);
    b = std::move(tmp);
}

int main() {
    double a = 1.0;
    double b = 2.0;
    Swap(a, b);

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    return 0;
}

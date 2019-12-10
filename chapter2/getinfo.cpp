#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main() {
    int carrots;

    cout << "How many carrots do you have?" << endl;
    cin >> carrots;
    cout << "Here are two more. ";
    carrots += 2;
    cout << "Now you have " << carrots << " carrots." << endl;

    return 0;
}

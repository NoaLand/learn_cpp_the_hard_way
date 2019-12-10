#include <iostream>
using std::cout;
using std::endl;

int main() {
    int carrots;

    carrots = 25;
    cout << "I have ";
    cout << carrots;
    cout << " carrots.";
    cout << endl;
    carrots -= 1;
    cout << "Crunch, crunch. Now I have " << carrots << " carrots." << endl;

    return 0;
}

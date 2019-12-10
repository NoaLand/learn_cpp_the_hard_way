#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

int main() {
    double area;
    double side;

    cout << "Enter the floor area, in square feet, of your home: ";
    cin >> area;
    side = sqrt(area);
    cout << "That's the equivalent of a square " << side
         << " feet to the side." << endl;
    cout << "How fascinating!" << endl;

    return 0;
}

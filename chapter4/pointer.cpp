#include <iostream>
using namespace std;

int main() {
    int updates = 6;
    int* p_update;
    p_update = &updates;

    cout << "Values: updates = " << updates;
    cout << ", *p_update = " << *p_update << endl;

    cout << "Address: &updates = " << &updates;
    cout << ", p_update = " << p_update << endl;

    cout << "===============================" << endl;
    int nights = 1001;
    int* pt = new int;
    cout << "1. *pt is: " << *pt << endl;
    *pt = nights;
    cout << "2. *pt is: " << *pt << endl;
    cout << "2. pt is: " << pt << endl;
    nights++;
    cout << "3. *pt is: " << *pt << endl;
    cout << "3. nights is: " << nights << endl;

    delete pt;
}

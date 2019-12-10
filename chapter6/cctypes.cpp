#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char ch;

    cin.get(ch);

    if(isalpha(ch)) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }

    return 0;

}

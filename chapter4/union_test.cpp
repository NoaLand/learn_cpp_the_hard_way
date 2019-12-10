#include <iostream>

using namespace std;

struct widget {
    char brand[20];
    int type;
    union {
        long id_num;
        char id_char[20];
    };
};

int main() {
    widget w{
            "brand",
            1
    };

    if (w.type == 1) {
        cin >> w.id_num;
    } else {
        cin >> w.id_char;
    }

    cout << "brand: " << w.brand << " "
         << "type: " << w.type << " "
         << "id char: " << w.id_char << " "
         << "id num" << w.id_num
         << endl;

    return 0;
}

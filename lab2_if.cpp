#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "vvedite cifru (1-4): ";
    cin >> num;

    if (num == 1) {
        cout << "zima" << endl;
    } else if (num == 2) {
        cout << "vesna" << endl;
    } else if (num == 3) {
        cout << "leto" << endl;
    } else if (num == 4) {
        cout << "osen" << endl;
    } else {
        cout << "takoy cifry net" << endl;
    }

    return 0;
}
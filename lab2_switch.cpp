#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "vvedite cifru (1-4): ";
    cin >> num;

    switch(num) {
        case 1:
            cout << "zima" << endl;
            break;
        case 2:
            cout << "vesna" << endl;
            break;
        case 3:
            cout << "leto" << endl;
            break;
        case 4:
            cout << "osen" << endl;
            break;
        default:
            cout << "takoy cifry net" << endl;
    }

    return 0;
}
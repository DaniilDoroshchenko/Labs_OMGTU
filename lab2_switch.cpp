#include <iostream>
using namespace std;

int main() {
    char animal;
    cout << "vvedite simvol (T, L, S, V): ";
    cin >> animal;

    switch(animal) {
        case 'T':
        case 't':
            cout << "tigr" << endl;
            break;
        case 'L':
        case 'l':
            cout << "lev" << endl;
            break;
        case 'S':
        case 's':
            cout << "slon" << endl;
            break;
        case 'V':
        case 'v':
            cout << "volk" << endl;
            break;
        default:
            cout << "takogo simvola net" << endl;
    }

    return 0;
}
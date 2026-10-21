#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // zadacha 1
    double a = 5, b = 2;
    double y = log(a + 4 * b) / pow(a + 4 * b, 2);
    cout << "y = " << y << endl;

    // zadacha 2
    double x, y1;
    cout << "vvedite x y: ";
    cin >> x >> y1;

    if (x * x + y1 * y1 <= 1) {
        cout << "TRUE" << endl;
    } else {
        cout << "FALSE" << endl;
    }

    return 0;
}
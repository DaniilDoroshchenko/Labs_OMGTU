#include <iostream>
using namespace std;

int main() {
    double x, y;
    cout << "vvedite x y: ";
    cin >> x >> y;

    
    bool in_triangle = (x >= 0) && (y >= 0) && (y <= -x + 6);
    
    bool in_circle = ((x - 1) * (x - 1) + (y - 1.5) * (y - 1.5)) <= 0.64;

    if (in_triangle && !in_circle) {
        cout << "TRUE" << endl;
    } else {
        cout << "FALSE" << endl;
    }

    return 0;
}
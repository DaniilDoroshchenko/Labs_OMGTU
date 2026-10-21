#include <iostream>
using namespace std;

int main() {
    
    // zadacha 11
    cout << "zadacha 11. vvedite n: ";
    int n;
    cin >> n;
    int min_val = 1000000, max_val = -1000000;
    cout << "vvedite " << n << " chisel: ";
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if(x < min_val) min_val = x;
        if(x > max_val) max_val = x;
    }
    cout << "otvet 1: " << min_val + max_val << endl << endl;

    // zadacha 30
    cout << "zadacha 30. vvedite chisla (0 - konec): ";
    min_val = 1000000;
    max_val = -1000000;
    int x;
    cin >> x;
    while(x != 0) {
        if(x < min_val) min_val = x;
        if(x > max_val) max_val = x;
        cin >> x;
    }
    cout << "otvet 2: " << min_val + max_val << endl << endl;

    // zadacha 51
    cout << "zadacha 51. vvedite chislo k: ";
    int k;
    cin >> k;
    if(k < 0) k = -k;
    int sum = 0;
    do {
        sum += k % 10;
        k /= 10;
    } while(k > 0);
    cout << "otvet 3: " << sum << endl;

    return 0;
}
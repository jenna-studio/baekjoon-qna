#include <iostream>
using namespace std;

int main() {

    int n;
    bool leapYear = true;

    cin >> n;

    if (((n % 4 == 0) && (n % 100 != 0)) || (n % 400 == 0)) {
        n = true;
    } else {
        n = false;
    }

    if (n == true) {
        cout << 1;
    } else {
        cout << 0;
    }

    return 0;
}
#include <iostream>
using namespace std;

int main() {

    int a, b, c, d, e;
    int verifyNum;

    cin >> a >> b >> c >> d >> e;

    verifyNum = (a*a + b*b + c*c + d*d + e*e) % 10;

    cout << verifyNum;

    return 0;
}
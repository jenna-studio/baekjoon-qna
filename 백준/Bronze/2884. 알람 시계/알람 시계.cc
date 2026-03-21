#include <iostream>
using namespace std;

int main() {

    int H, M;
    cin >> H >> M;

    if (M >= 45) {
        cout << H << " " << (M - 45);

    } else {
        if (H >= 1) {
            H = H-1;
            M = M + 15;  // (60 - 45)
        } else {
            H = H + 24 - 1;
            M = M + 15;
        }

        cout << H << " " << M;
    }

    return 0;
}

#include <iostream>
using namespace std;

int main() {

    int N;
    cin >> N;

    int x;
    cin >> x;

    int maxVal = x;
    int minVal = x;

    for (int i=1; i<N; i++) {
        cin >> x;

        if (x > maxVal) {
            maxVal = x;
        }

        if (x < minVal) {
            minVal = x;
        }
    }

    cout << minVal << " " << maxVal;

    return 0;
}

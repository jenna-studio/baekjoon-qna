#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int M, N;
    cin >> M >> N;

    int sum = 0;
    int minVal = 10001;

    for ( int i = M; i<= N; i++) {

        int root = sqrt(i);

        if (root * root == i) {
            sum += i;

            if (i < minVal) {
                minVal = i;
            }
        }
    }

    if (sum == 0) {
        cout << -1;
    } else {
        cout << sum << endl;
        cout << minVal << endl;
    }


    return 0;
}
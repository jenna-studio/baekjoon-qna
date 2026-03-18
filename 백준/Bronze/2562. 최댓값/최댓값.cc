#include <iostream>
using namespace std;

int main() {

    int arr[9];

    for (int i=0; i<9; i++) {
        cin >> arr[i];
    }

    int max = arr[0];  // set the initial value
    int index = 0;  // save the location

    for (int i=1; i<9; i++) {
        if (arr[i] > max) {
            max = arr[i];
            index = i;
        }
    }

    cout << max << '\n';
    cout << index + 1 << '\n';

    return 0;
}
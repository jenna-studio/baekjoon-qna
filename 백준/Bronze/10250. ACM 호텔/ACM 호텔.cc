#include <iostream>
using namespace std;

int main() {

    int T;
    cin >> T;

    int H, W, N;

    while (T--) {
        cin >> H >> W >> N;

        int floor = (N-1) % H + 1;
        int room = (N-1) / H + 1;

        cout << floor;

        if (room < 10) {
            cout << "0" << room;
        } else {
            cout << room;
        }
        cout << '\n';
    }

    return 0;
}
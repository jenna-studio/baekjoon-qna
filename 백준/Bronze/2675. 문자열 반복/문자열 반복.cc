#include <iostream>
#include <string>
using namespace std;

int main() {

    int T;
    cin >> T;

    while (T--) {
        int R;
        string S;
        cin >> R >> S;

        for (int i=0; i<S.size(); i++) {
            for (int r=0; r<R; r++) {
                cout << S[i];
            }
        }
        cout << '\n';
    }

    return 0;
}
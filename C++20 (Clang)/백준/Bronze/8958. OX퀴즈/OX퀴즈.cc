#include <iostream>
#include <string>
using namespace std;

int main() {

    int t;
    cin >> t;  // test case num

    while(t--) {

        string s;
        cin >> s;

        int score = 0;
        int streak = 0;

        for (char ch : s) {
            if (ch == 'O') {
                streak++;
                score += streak;
            } else {
                streak = 0;
            }
        }
        
        cout << score << '\n';

    }

    return 0;
}

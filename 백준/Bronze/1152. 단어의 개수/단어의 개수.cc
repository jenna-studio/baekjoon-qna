#include <iostream>
#include <string>
using namespace std;

int main() {

    string s;

    int count = 0;

    while (cin >> s) { // reads one whitespace-delimited token at a time
        count++;
    }

    cout << count;

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main() {

    int A, B, C;
    cin >> A >> B >> C;

    // Case 1: treat as numbers
    cout << A + B - C << endl;

    // Case 2: treat as strings
    string sA = to_string(A);
    string sB = to_string(B);

    string combined = sA + sB;
    int result = stoi(combined) - C;

    cout << result << endl;

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main() {

    int A, B, C;
    cin >> A >> B >> C;

    string result = to_string(A * B * C);

    int arr[10] = {};  // 0 ~ 9 까지를 저장하는 배열

    for (int i=0; i<result.size(); i++) {
        arr[result[i] - '0'] += 1;  // '7' - '0' = 7 (올바른 인덱스)
    }

    for (int i=0; i<10; i++) {
        cout << arr[i] << '\n';
    }

    return 0;
}
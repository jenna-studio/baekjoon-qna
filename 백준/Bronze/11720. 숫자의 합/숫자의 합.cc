#include <iostream>
#include <string>
using namespace std;

int main() {

    int N;

    cin >> N;

    int sum = 0;

    string s;

    cin >> s;  // 숫자들을 문자열로 받음

    for (int i=0; i<N; i++) {
        // 문자를 숫자로 변환하기 위해 '0'을 뺌
        sum += (s[i] - '0');
    }

    cout << sum;

    return 0;
}
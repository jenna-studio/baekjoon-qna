#include <iostream>
#include <string>
using namespace std;

int main() {

    string s;
    cin >> s;

    // 알파벳 26개에 대해 -1로 초기화
    int pos[26];
    for (int i=0; i<26; i++) {
        pos[i] = -1;
    }

    // 문자열을 순회하면서 처음 등장 위치 기록
    for (int i=0; i< s.length(); i++) {
        int index = s[i]-'a';  // 현재문자 s[i]를 숫자로 변환
        if (pos[index] == -1) {
            pos[index] = i;
        }
    }

    // 결과 출력
    for (int i=0; i<26; i++) {
        cout << pos[i] << " ";
    }

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    getline(cin, str);

    int count = 0;
    bool inWord = false;

    if (str.empty()) {
        cout << "0" << "\n";
        return 0;
    }

    for (char c : str) {
        if (c == ' ') {
            if (inWord) {
                count++;
                inWord = false;
            }
        }
        else {
            inWord = true;
        }
    }

    // 마지막 단어가 문자열 끝까지 이어질 경우 처리
    if (inWord) {
        count++;
    }

    cout << count << "\n";
    return 0;
}

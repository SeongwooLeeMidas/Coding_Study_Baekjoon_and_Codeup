#include <iostream>
using namespace std;

int main(int argc, char const* argv[]) {
    // c, c++의 동기화 해제 
    ios_base::sync_with_stdio(false);
    // 입력 출력 연결 해제
    cin.tie(NULL);

    int T, a, b;

    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> a >> b;
        cout << a + b << "\n";
    }

    return 0;
}
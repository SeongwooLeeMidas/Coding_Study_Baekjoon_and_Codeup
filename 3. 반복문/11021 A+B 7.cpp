#include <iostream> 
using namespace std;

int main(int argc, char const* argv[]) {

    ios_base::sync_with_stdio(false); // 두 표준 입출력 동기화해제
    cin.tie(NULL); // 입출력 묶여있는거 해제

    int T;
    cin >> T;

    for (int i = 1; i <= T; i++) {
        int a, b;
        cin >> a >> b;
        cout << "Case #" << i << ": " << a + b << "\n";
    }
    return 0;
}
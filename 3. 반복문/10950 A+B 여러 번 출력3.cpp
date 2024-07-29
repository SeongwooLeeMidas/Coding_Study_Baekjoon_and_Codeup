#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
    int a, b;
    int T;

    cin >> T;

    // 테스트 케이스만큼 반복
    for (int i = 0; i < T; i++) {
        cin >> a >> b;
        cout << a + b << "\n";
    }

    return 0;
}
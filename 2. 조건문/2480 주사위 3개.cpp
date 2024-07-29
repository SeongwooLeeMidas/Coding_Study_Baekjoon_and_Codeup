#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
    ios_base::sync_with_stdio(false);

    int a, b, c;
    cin >> a >> b >> c;

    // 모든 변수가 다른 경우
    if (a != b && a != c && b != c) {
        int max;
        if (a > b) {
            if (c > a) {
                max = c;
            }
            else {
                max = a;
            }
        }
        else {
            if (c > b) {
                max = c;
            }
            else {
                max = b;
            }
        }
        cout << max * 100;
    }

    // 한 변수는 겹칠 때
    else {
        if (a == b && a == c) {
            cout << 10000 + a * 1000;
        }
        // b와 c가 같을 때
        else {
            // a가 b혹은 c랑만 같을 때
            if (a == b || a == c) {
                cout << 1000 + a * 100;
            }

            // b가 c랑 같은 경우
            else {
                cout << 1000 + b * 100;
            }
        }
    }
    return 0;
}
#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
    int h, m;

    cin >> h >> m;

    // 입력받은 분이 45분보다 작으면
    if (m < 45) {
        h--;
        m = 60 - (45 - m);

        // 시가 음수가 되면 23시로 바꿔주기
        if (h < 0) {
            h = 23;
        }
    }

    else {
        m = m - 45;
    }

    cout << h << " " << m;

    return 0;
}
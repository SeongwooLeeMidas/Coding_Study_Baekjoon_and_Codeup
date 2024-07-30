#include <iostream>
using namespace std;

// 틀린 이유 : 4의 배수일 때 경우 처리 다 하고 4의 배수 아닐 때 안해줌
// else 써서 끝난줄 착각
int main(int argc, char const* argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int y;
    cin >> y;

    if (y % 4 == 0) {
        if (y % 400 == 0) {
            cout << 1;
        }
        else if (y % 100 != 0)
        {
            cout << 1;
        }
        else
            cout << 0;
    }

    else 
        cout << 0;

    return 0;
}
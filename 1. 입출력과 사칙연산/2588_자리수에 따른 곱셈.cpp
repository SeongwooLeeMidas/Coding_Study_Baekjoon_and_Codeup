// cin과 cout의 방향을 잘 확인하기

#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a;
    cin >> b;

    cout << a * (b % 10) << endl;
    cout << a * ((b % 100) / 10) << endl;
    cout << a * (b / 100) << endl;
    cout << a * b << endl;
}

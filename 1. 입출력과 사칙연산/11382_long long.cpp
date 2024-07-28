// a,b,c 를 계산하는데 범위가 10^12 까지이므로
// long long을 사용해준다. int로는 부족함


#include <iostream>

using namespace std;

int main(void)
{
    long long a, b, c;

    cin >> a >> b >> c;
    cout << (long long)(a + b + c);

    return 0;
}
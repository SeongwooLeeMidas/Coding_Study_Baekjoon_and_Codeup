#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
    int x, n;
    int a, b;
    int sum = 0;

    cin >> x >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        sum += a * b;
    }

    if (x == sum)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
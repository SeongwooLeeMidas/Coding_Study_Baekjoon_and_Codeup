#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int A, B;
    cin >> A >> B;

    if (A > B)
    {
        cout << ">";
    }
    else if (A < B)
    {
        cout << "<";
    }
    else
        cout << "==";

    return 0;
}
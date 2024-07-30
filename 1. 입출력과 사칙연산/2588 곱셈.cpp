#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a, b;
	cin >> a >> b;

	// 어떻게 하면 3, 8, 5를 사용할 수 있을지 생각
	cout << a * (b % 10) << "\n";
	cout << a * ((b % 100) / 10) << "\n";
	cout << a * (b / 100) << "\n";
	cout << a * b;

	return 0;
}
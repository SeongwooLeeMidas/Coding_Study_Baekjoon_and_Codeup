#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 1; j <= i; j++) {
			cout << " ";
		}
		for (int j = 1; j <= 2 * (n - i) - 1; j++) {
			cout << "*";
		}
		cout << "\n";
	}

	// 마지막에 한 줄 필요없으니까 n-1까지만 행을 돌려주자
	for (int i = 1; i <= n-1; i++) {
		for (int j = 1; j <= n - i - 1; j++) {
			cout << " ";
		}
		for (int j = 1; j <= 2 * i + 1; j++) {
			cout << "*";
		}
		cout << "\n";
	}
	return 0;
}
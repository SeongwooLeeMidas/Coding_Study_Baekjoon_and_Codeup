#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 1; j <= n - i; j++) {
			cout << "*";
		}
		cout << "\n";
	}

	return 0;
}
#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
		cout << "\n";
	}

	return 0;
}
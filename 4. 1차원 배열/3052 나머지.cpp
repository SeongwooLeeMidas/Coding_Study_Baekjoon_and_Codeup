#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	int count[42] = {};
	
	int n;
	for (int i = 0; i < 10; i++) {
		cin >> n;
		count[n % 42]++;
	}

	int result = 0;
	for (int n : count) {
		if (n > 0) {
			result++;
		}
	}

	cout << result << "\n";
	return 0;
}
#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	int N;
	cin >> N;

	int minValue = 1000001;
	int maxValue = -1000001;

	int inputValue;
	for (int i = 0; i < N; i++) {
		cin >> inputValue;

		if (inputValue < minValue) {
			minValue = inputValue;
		}

		if (inputValue > maxValue) {
			maxValue = inputValue;
		}
	}

	cout << minValue << " " << maxValue;

	return 0;
}
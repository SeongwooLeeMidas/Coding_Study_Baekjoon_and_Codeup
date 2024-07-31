#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	int arr[9];

	for (int i = 0; i < 9; i++) {
		cin >> arr[i];
	}

	int max = -1;
	int maxIndex;

	for (int i = 0; i < 9; i++) {
		if (arr[i] > max) {
			max = arr[i];
			maxIndex = i;
		}
	}
	cout << max << "\n";
	cout << maxIndex + 1;

	return 0;
}
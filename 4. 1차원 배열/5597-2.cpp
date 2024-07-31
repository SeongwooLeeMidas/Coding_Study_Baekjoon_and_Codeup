#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	int n;
	int arr[31];
	
	for (int i = 0; i < 28; i++) {
		cin >> n;
		arr[n] = 1;
	}

	for (int i = 1; i <= 30; i++) {
		if (arr[i] == 0) {
			cout << i << "\n";
		}
	}

	return 0;
}
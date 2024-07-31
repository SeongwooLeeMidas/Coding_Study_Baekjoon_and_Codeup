#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	int N, v;
	cin >> N;

	int arr[101];

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	cin >> v;

	int count = 0;
	for (int i = 0; i < N; i++) {
		if (arr[i] == v)
		{
			count++;
		}
	}
	cout << count;
} 

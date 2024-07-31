#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	int N, M;
	cin >> N >> M;

	int arr[101];
	for (int i = 1; i <= N; i++) {
		arr[i] = i;
	}

	int a, b;
	for (int k = 0; k < M; k++) {
		cin >> a >> b;

		int temp = arr[a];
		arr[a] = arr[b];
		arr[b] = temp;
	}
	for (int i = 1; i <= M; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}
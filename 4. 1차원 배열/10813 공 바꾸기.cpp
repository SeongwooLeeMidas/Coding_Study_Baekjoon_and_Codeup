#include <iostream>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	// 초기 바구니 상태
	int arr[101];
	for (int i = 1; i <= n; i++) {
		arr[i] = i;
	}

	// 교환 작업
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		// 공 번호 교환
		int temp = arr[a];
		arr[a] = arr[b];
		arr[b] = temp;
	}

	// 결과 출력
	for (int i = 1; i <= n; i++) {
		cout << arr[i] << " ";
	}
	cout << "\n";

	return 0;
}
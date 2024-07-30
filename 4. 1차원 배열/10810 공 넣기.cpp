#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	int n, m;
	cin >> n >> m;

	int arr[101] = { 0, }; // 0으로 배열 초기화

	int a, b, c;
	for (int i = 0; i < m; i++) {
		cin >> a >> b >> c;
		for (int k = a; k <= b; k++) {
			arr[k] = c;
		}
	}

	for (int i = 1; i <= n; i++) {
		cout << arr[i] << ' ';
	}
}

// 구현 예시가 이해가 안돼서 아래에 내용 첨부
// 첫 번째 공을 넣는 작업
//cin >> a >> b >> c; // 가령, a = 2, b = 4, c = 7
//for (int k = a; k <= b; k++) {
//	arr[k] = c;
//}
// 이 경우, arr[2] = 7, arr[3] = 7, arr[4] = 7

// 두 번째 공을 넣는 작업
//cin >> a >> b >> c; // 가령, a = 1, b = 3, c = 5
//for (int k = a; k <= b; k++) {
//	arr[k] = c;
//}
// 이 경우, arr[1] = 5, arr[2] = 5, arr[3] = 5
// 이전에 arr[2]와 arr[3]에 들어있던 7은 5로 덮어쓰기 됩니다.
#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	int n, v;
	int arr[101];

	cin >> n; // 정수의 개수 입력받음

	for (int i = 0; i < n; i++) {
		cin >> arr[i]; // 배열에 정수를 입력 받음
	}
	cin >> v; // 찾으려는 정수를 입력받음

	int count = 0; // v랑 배열의 요소랑 비교해서 같으면 카운트 증가
	for (int i = 0; i < n; i++) {
		if (arr[i] == v)
			count++;
	}
	cout << count; // 증가한 카운트를 출력
}
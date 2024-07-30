#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	// 정수의 개수 N과 찾을 정수 v를 선언
	int N, v;
	// 최대 100개의 정수를 저장할 배열 arr을 선언해준다
	int arr[101];

	// 정수의 개수를 입력받고
	cin >> N;

	// 그 N개의 정수를 배열에 입력받기
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	// 그 다음에 찾으려는 정수 v 입력받기
	cin >> v;

	// 찾으려는 정수 v의 개수 세야하는데 어떻게 세지?
	// 아 count 써가지고 발견할때마다 올려주면 되겠다
	int count = 0;
	for (int i = 0; i < N; i++) {
		if (arr[i] == v) {
			count++;
		}
	}
	cout << count;

	return 0;
}
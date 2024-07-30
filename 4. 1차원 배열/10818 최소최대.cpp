#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char const* argv[])
{
	ios_base::sync_with_stdio(false); // 백준 코테에서 시간 3배 차이난듯?

	int N;
	cin >> N;

	int arr[1000001];

	// 생각해보니 입력할 때 띄어쓰기 어쩌지 햇는데 어차피 내가 조절 가능함
	// cin에서 >> " " 이런거 못하니까 사용ㄴㄴ
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + N); // 0 ~ N-1 범위 정렬
	
	cout << arr[0] << " " << arr[N - 1];

	return 0;
}
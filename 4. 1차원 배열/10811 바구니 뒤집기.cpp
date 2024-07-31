#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M;
	cin >> N >> M;

	// 바구니 번호를 1부터 N까지 입력
	int baskets[101];
	for (int i = 1; i <= N; i++) {
		baskets[i] = i;
	}

	for (int i = 0; i < M; i++) {
		int start, end;
		cin >> start >> end;

		// 배열 일부를 역순으로 변환
		while (start < end) {
			int temp = baskets[start];
			baskets[start] = baskets[end];
			baskets[end] = temp;

			start++;
			end--;
		}
	}

	for (int i = 1; i <= N; i++) {
		cout << baskets[i] << " ";
	}
	cout << "\n";

	return 0;
}
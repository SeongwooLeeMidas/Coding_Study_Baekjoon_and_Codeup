#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	// 별 출력, 공백 출력 이후 다시 별 출력하도록 3번 돌려준다
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
		for (int j = 1; j <= 2*(n - i); j++) {
			cout << " ";
		}
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
		cout << "\n";
	}

	// 위와 아래의 공통점이 없으니 위에 돌리고 아래 비슷하게 3번 새로 돌려준다.
	// 여기선 오류가 안생겻지만 n-1까지로 해야한다. 마지막 줄이 필요없으니까
	// 별이 사라지는 구조라 오류가 안 생겼다고 생각함
	for (int i = 1; i <= n-1; i++) {
		for (int j = 1; j <= n - i; j++) {
			cout << "*";
		}
		for (int j = 1; j <= 2 * i; j++) {
			cout << " ";
		}
		for (int j = 1; j <= n - i; j++) {
			cout << "*";
		}
		cout << "\n";
	}
	return 0;
}
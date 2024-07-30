#include <iostream>
using namespace std;

int main(int argc, const char* argv[]) 
{
	ios_base::sync_with_stdio(0);

	// 초기값을 무조건 minValue와 maxValue에 넣기 위해서
	// 이렇게 선언해주면 어떤 값도 백만1보다는 작고, 어떤 값도 백만1보다는 크다
	int minValue = 1000001;
	int maxValue = -1000001;

	int N;
	cin >> N;

	int inputValue;
	for (int i = 0; i < N; i++) {
		cin >> inputValue;

		// 입력으로 들어온 값이 minValue보다 작다면 min을 inputValue로 갱신
		if (inputValue < minValue) {
			minValue = inputValue;
		}
		// 입력으로 들어온 값이 maxValue보다 크다면 max를 inputValue로 갱신
		if (inputValue > maxValue) {
			maxValue = inputValue;
		}
	}

	cout << minValue << " " << maxValue;
	return 0;
}
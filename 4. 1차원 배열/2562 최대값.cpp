#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	int num[9];
	for (int i = 0; i < 9; i++) {
		cin >> num[i];
	}

	int maxValue = -1; // 최대값
	int maxValueIndex; // 최대값 위치
	
	for (int i = 0; i < 9; i++) {
		if (num[i] > maxValue) {
			maxValue = num[i];
			maxValueIndex = i;
		}
	}
	// 여기서 실수한게 maxvalue랑 인덱스 둘다 출력햇는데
	// 인덱스는 0부터 시작해서 하나 더해줘야하는걸 까먹음
	cout << maxValue << "\n";

	cout << maxValueIndex + 1;
	return 0;
}
#include <iostream>
using namespace std;

int main(void)
{
	string S;
	int T;
	cin >> T;
	
	int R;
	for (int i = 0; i < T; i++) {
		cin >> R >> S;
	}
	// 위 for문 대신 while (T--) 가능

	string P = ""; // 빈 문자열 P

	// 문자열 S의 각 문자 반복
	// 범위 기반 for 문 C+11 이상
	for (char c : S) {
		// 문자 c를 R번 반복해 P에 추가
		for (int i = 0; i < R; i++) {
			P += c;
		}
	}
	cout << P << "\n";
	
}
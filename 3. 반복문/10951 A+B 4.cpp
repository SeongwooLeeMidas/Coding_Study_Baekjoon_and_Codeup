#include <iostream>
using namespace std;

// 10952와 다른 점은 몇 개를 입력받는지 알 수 없다는 점
// 입력 파일만 가지고 입력을 받을 때, 더 이상 읽을 수 있는 데이터가 없는 경우
// 파일의 끝일 때 이를 EOF라고 한다
// 파일의 끝까지 읽었다고 끝이 아니라 다 읽고 더 읽을게 없을 때 EOF

int main(int argc, char const* argv[])
{
	int a, b;
	while (!(cin >> a >> b).eof()) { // cin>>a>>b.eof 방식으로 읽은 후 eof 상태를 검사하도록 설정
		cout << a + b << "\n";
	}
	return 0;
}

//#include <cstdio>
//
//int main(int argc, const char* argv[]) {
//
//	int a, b;
//
//	// 또는 scanf("%d %d", &a, &b) == 2 로도 가능
//	while (scanf("%d %d", &a, &b) != -1) {
//		printf("%d\n", a + b);
//	}
//
//	return 0;
//}
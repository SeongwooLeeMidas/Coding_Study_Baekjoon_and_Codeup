#include <iostream>
#include <string>
using namespace std;

// string 클래스는 문자열 저장, 길이 추측, 문자 접근
// 문자열 연결, 비교, 삽입 및 삭제 가능
int main(void)
{
	string s;
	int i;
	cin >> s >> i;

	cout << s[i-1];

	return 0;
}
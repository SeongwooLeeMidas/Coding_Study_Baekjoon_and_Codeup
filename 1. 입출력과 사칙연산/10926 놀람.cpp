#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	// 처음에 틀린 이유 : 50자 안 넘는데서 관성적으로 name[50]으로 써서
	// 51로 써줘야 됨 NULL 문자까지 생각해서
	char name[51];
	cin >> name;

	cout << name << "??!";
	
	return 0;
}
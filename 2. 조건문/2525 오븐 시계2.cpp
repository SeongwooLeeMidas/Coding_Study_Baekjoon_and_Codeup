#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	int A, B, C;
	cin >> A >> B >> C;

	int min = 60 * A + B; // 시를 분으로 아예 전환
	min = min + C;

	int hour = min / 60;
	int minute = min % 60;

	cout << hour << " " << minute;

}
#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	ios_base::sync_with_stdio(false);

	int A, B, C;
	cin >> A >> B >> C;

	int min = 60 * A + B; // ½Ã -> ºĞ
	min += C;

	int hour = (min / 60) % 24;
	int minute = min % 60;

	cout << hour << " " << minute;
	return 0;
}
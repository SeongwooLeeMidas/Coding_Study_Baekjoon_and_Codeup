#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	ios_base::sync_with_stdio(false);

	int H, M;
	cin >> H >> M;

	if (M < 45)
	{
		H--;
		M = 60 - (45 - M);
		
		// 시가 음수일 때
		if (H < 0) {
			H = 23;
		}
	}
	else
	{
		M = M - 45;
	}

	cout << H << " " << M;

	return 0;
}
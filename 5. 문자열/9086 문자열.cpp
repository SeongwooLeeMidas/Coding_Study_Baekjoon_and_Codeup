#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	int test;
	string s;

	cin >> test;

	for (int i = 0; i < test; i++) {
		cin >> s;
		int size = s.length();
		cout << s[0] << s[size - 1] << "\n";
	}

	return 0;
}
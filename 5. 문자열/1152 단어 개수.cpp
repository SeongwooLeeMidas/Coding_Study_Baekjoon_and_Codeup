#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	// 공백 포함해야해서 getline으로 받음
	getline(cin, str);

	int count = 0;
	bool inWord = false;

	if (str.empty()) {
		cout << "0" << "\n";
		return 0;
	}

	for (int i = 0; i < str.length(); i++) {
		if (str[i] == ' ') {
			if (inWord) {
				count++;
				inWord = false;
			}
		}
		else {
			inWord = true;
		}
	}

	if (inWord) {
		count++;
	}
	cout << count << "\n";
}
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string input;
	cin >> input;

	string alphabet = "abcdefghijklmnopqrstuvwxyz";
	
	for (int i = 0; i < alphabet.length(); i++) {
		cout << (int)input.find(alphabet[i]) << " ";
	}

	return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string word;
	cin >> word;

	int totalTime = 0;

    // for (int i = 0; i < word.length(); i++) {
    //      char c = word[i]; ..Áß·«
    for (char c : word) {
        if (c >= 'A' && c <= 'C') {
            totalTime += 3; // 2 + 1
        }
        else if (c >= 'D' && c <= 'F') {
            totalTime += 4; // 3 + 1
        }
        else if (c >= 'G' && c <= 'I') {
            totalTime += 5; // 4 + 1
        }
        else if (c >= 'J' && c <= 'L') {
            totalTime += 6; // 5 + 1
        }
        else if (c >= 'M' && c <= 'O') {
            totalTime += 7; // 6 + 1
        }
        else if (c >= 'P' && c <= 'S') {
            totalTime += 8; // 7 + 1
        }
        else if (c >= 'T' && c <= 'V') {
            totalTime += 9; // 8 + 1
        }
        else if (c >= 'W' && c <= 'Z') {
            totalTime += 10; // 9 + 1
        }
    }

    cout << totalTime << "\n";
    return 0;
}
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	string A, B;
	cin >> A >> B;

	reverse(A.begin(), A.end());
	reverse(B.begin(), B.end());

	// C++에서는 stoi가 정석, C는 atoi가 정석
	int reversedA = stoi(A);
	int reversedB = stoi(B);

	cout << max(reversedA, reversedB) << "\n";

	return 0;
}
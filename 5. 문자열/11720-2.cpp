#include <iostream>
using namespace std;

int main(void)
{
	int N;
	cin >> N;

	string number;
	cin >> number;

	int sum = 0;
	for (int i = 0; i < N; i++) {
		sum += number[i] - '0';
	}

	cout << sum;
}
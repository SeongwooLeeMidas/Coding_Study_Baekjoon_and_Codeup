#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int N;
	cin >> N;

	string numbers;
	cin >> numbers;
	
	int sum = 0;
	for (int i = 0; i < N; i++) {
		sum += numbers[i] - '0';
	}
	cout << sum;
	return 0;
}
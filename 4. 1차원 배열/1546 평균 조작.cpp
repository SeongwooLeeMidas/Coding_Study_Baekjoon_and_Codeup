#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char const* argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N; // 과목 개수
	cin >> N;
	double sum = 0;

	double grade[1001];
	for (int i = 0; i < N; i++) {
		cin >> grade[i];
	}

	sort(grade, grade + N);

	for (int i = 0; i < N; i++) {
		sum = sum + (grade[i] / grade[N - 1]) * 100;
	}

	cout << sum / N;
	return 0;
}
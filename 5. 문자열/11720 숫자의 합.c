#include <stdio.h>

int main(void)
{
	// N은 값을 받아오니까 초기화 안해도됨
	int N = 0;
	char numbers[101];

	scanf("%d", &N);
	scanf("%s", &numbers);

	// sum은 값을 받아오는게 아니라 대입하는거라 초기화 해야함
	int sum = 0;
	for (int i = 0; i < N; i++) {
		sum += numbers[i] - '0';
	}

	printf("%d\n", sum);

	return 0;
}
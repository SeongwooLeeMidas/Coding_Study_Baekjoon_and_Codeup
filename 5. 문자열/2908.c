#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void reverseString(char* str) {
	int length = strlen(str);
	// 절반만 반복하면 다 교환되어있음
	for (int i = 0; i < length / 2; i++) {
		char temp = str[i];
		str[i] = str[length - i - 1];
		str[length - i - 1] = temp;
	}
}

int main()
{
	char A[4], B[4];

	scanf("%s %s", A, B);

	// 뒤집기
	reverseString(A);
	reverseString(B);

	// 정수로 변환
	int reversedA = atoi(A);
	int reversedB = atoi(B);

	if (reversedA > reversedB) {
		printf("%d\n", reversedA);
	}
	else {
		printf("%d\n", reversedB);
	}
	return 0;
}
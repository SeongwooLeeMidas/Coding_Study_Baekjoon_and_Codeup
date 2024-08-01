#include <stdio.h>

int main(int argc, const char* argv[])
{
	int T;
	scanf("%d", T);

	char S[1001];

	for (int i = 0; i < T; i++) {
		scanf("%s", S);

		int size = strlen(S); // 문자열의 길이 구하기

		printf("%c%c\n", S[0], S[size-1]);
	}

	return 0;
}
#include <stdio.h>
#include <string.h>

int main(void)
{
	char word[101];
	// 문자열 배열은 & 연산자 필요없음, 쓰면 2차원 배열 주소
	scanf("%s", word);

	// strlen은 널 문자 전까지 문자 수 세서 반환
	int length = strlen(word);

	printf("%d\n", length);

	return 0;
}
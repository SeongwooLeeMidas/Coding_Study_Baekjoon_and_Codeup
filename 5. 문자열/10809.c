#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[101];
	scanf("%s", s);

	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";

	// 첫 등장 위치 탐색
	for (int i = 0; i < 26; i++) {
		// char* pos(문자열, 찾을 문자), pos는 position의 약자
		// strchr가 반환하는 포인터 pos는 문자열 내에서 특정 문자의 주소를 가리킴
		// s는 문자열의 시작 주소이므로 pos에서 빼줘야 몇 번째 위치인지 알 수 있음
		char* pos = strchr(s, alphabet[i]);

		// 형 변환 해주는게 깔끔, 안해도 ㄱㅊ
		if (pos != NULL) {
			printf("%ld", (long)(pos - s));
		}
		else {
			printf("-1");
		}

		if (i < 25) {
			printf(" ");
		}

	}
	printf("\n");

	return 0;
}
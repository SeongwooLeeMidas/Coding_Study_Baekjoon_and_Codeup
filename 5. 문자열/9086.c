#include <stdio.h>

int main() {
    int T; // 테스트 케이스의 수를 저장할 변수
    char str[1001]; // 각 문자열을 저장할 배열, 최대 1000자 + 널 종료 문자

    scanf("%d", &T);

    // 테스트 케이스 처리
    for (int i = 0; i < T; i++) {
        scanf("%s", str);

        // 첫 글자, 마지막 글자 출력
        printf("%c%c\n", str[0], str[strlen(str) - 1]);
    }
    return 0;
}
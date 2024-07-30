#include <stdio.h>

// 헷갈린 이유 예제 입력 저 3줄이 다 입력일 것이라고 인식 못함
// 뭔가 출력 같을 거라 생각했는데 입력이 3번이니 3번의 scanf 사용이 필요함
// 11은 N, 2는 v, 중간에 여러 개는 for문 돌려서 해결, for문 돌리는 주체는 미리 선언한 배열
// 배열의 크기는 범위보고 판단
int main(void)
{
	int N, v;
	int arr[101];

	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}

	scanf("%d", &v);

	int count = 0;
	for (int i = 0; i < N; i++) {
		if (arr[i] == v)
			count++;
	}
	printf("%d", count);

	return 0;
}

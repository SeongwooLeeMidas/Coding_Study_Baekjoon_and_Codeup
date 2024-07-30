#include <stdio.h>

int main(void)
{
	int A, B, C;

	scanf("%d %d %d", &A, &B, &C);
	// 틀렸던 이유 : scanf랑 printf에 대해 이해 부족
	// scanf는 %d로 받고, 뭘 받을지 앤드 연산자로 하는거 알았는데
	// printf 쓸 때 먼저 %d\n으로 출력하고, 뒤에 출력할거 쉼표로 써주는걸 착각했음
	printf("%d\n", (A + B) % C);
	printf("%d\n", ((A % C) + (B % C)) % C);
	printf("%d\n", (A * B) % C);
	printf("%d\n", ((A % C) * (B % C)) % C);

	return 0;
}
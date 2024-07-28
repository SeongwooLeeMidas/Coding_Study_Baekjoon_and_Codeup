// 472 x 385 인데 
// 첫 번째가 472 * 5, 두 번째가 472 * 8
// 세 번째가 472 * 3, 네 번째는 472*385
// 자리수를 잘 생각해서 /와 %를 이용해서 어떻게 하면 5, 8, 3을 사용해서 곱할 수 있을지 고민

#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);

    printf("%d\n", a * (b % 10));
    printf("%d\n", a * (b % 100 / 10));
    printf("%d\n", a * (b / 100));
    printf("%d\n", a * b);

    return 0;
}
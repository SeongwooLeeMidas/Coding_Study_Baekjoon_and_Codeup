// C++과는 다르게 long long을 사용했으므로 lld로 정수를 받아야한다
// 입력받을 때는 항상 scanf 사용

#include <stdio.h>

int main(void)
{
    long long a, b, c;

    scanf("%lld %lld %lld", &a, &b, &c);
    printf("%lld", a + b + c);

    return 0;
}
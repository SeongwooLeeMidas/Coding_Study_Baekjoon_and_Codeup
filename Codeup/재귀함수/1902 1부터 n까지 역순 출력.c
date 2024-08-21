#include <stdio.h>

void backprintNumbers(int n)
{
    if (n == 0)
        return;

    printf("%d\n", n); // 역순이라 먼저 출력하고 재귀 호출
    backprintNumbers(n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    backprintNumbers(n);
    return 0;
}
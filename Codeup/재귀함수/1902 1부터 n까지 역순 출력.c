#include <stdio.h>

void backprintNumbers(int n)
{
    if (n == 0)
        return;

    printf("%d\n", n); // �����̶� ���� ����ϰ� ��� ȣ��
    backprintNumbers(n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    backprintNumbers(n);
    return 0;
}
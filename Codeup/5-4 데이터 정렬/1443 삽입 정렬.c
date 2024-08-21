#include <stdio.h>
int a[10001];
int n, i, j, temp, key;
int main() {
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    for (i = 2; i <= n; i++) // 개인적으로 선호하는 방식은 아님
    {
        key = a[i];
        for (j = i - 1; j >= 0 && a[j] > key; j--)
            // 삽입정렬은 j=i+1부터 j>0 && 이 포인트고 j--해서 앞으로 감
        {
            a[j + 1] = a[j];
        }
        a[j + 1] = key;
    }

    for (i = 1; i <= n; i++)
        printf("%d\n", a[i]);
    return 0;
}

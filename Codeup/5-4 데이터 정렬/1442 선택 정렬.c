#include <stdio.h>
int a[10001];
int n, i, j, temp, min;
int main() {
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        scanf("%d", &a[i]);  // 배열 개수, 요소 입력 받고
    for (i = 1; i < n; i++) {
        min = i; // 최소 인덱스를 i로
        for (j = i + 1; j <= n; j++) 
        {
            if (a[j] < a[min]) // 최소 인덱스가 더 크다면 j를 min에 넣고 스왑
                min = j;
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
    for (i = 1; i <= n; i++)
        printf("%d\n", a[i]);
    return 0;
}

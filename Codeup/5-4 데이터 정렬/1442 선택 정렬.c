#include <stdio.h>
int a[10001];
int n, i, j, temp, min;
int main() {
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        scanf("%d", &a[i]);  // �迭 ����, ��� �Է� �ް�
    for (i = 1; i < n; i++) {
        min = i; // �ּ� �ε����� i��
        for (j = i + 1; j <= n; j++) 
        {
            if (a[j] < a[min]) // �ּ� �ε����� �� ũ�ٸ� j�� min�� �ְ� ����
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

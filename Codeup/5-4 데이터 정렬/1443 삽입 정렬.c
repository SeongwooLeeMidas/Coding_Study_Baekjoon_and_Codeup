#include <stdio.h>
int a[10001];
int n, i, j, temp, key;
int main() {
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    for (i = 2; i <= n; i++) // ���������� ��ȣ�ϴ� ����� �ƴ�
    {
        key = a[i];
        for (j = i - 1; j >= 0 && a[j] > key; j--)
            // ���������� j=i+1���� j>0 && �� ����Ʈ�� j--�ؼ� ������ ��
        {
            a[j + 1] = a[j];
        }
        a[j + 1] = key;
    }

    for (i = 1; i <= n; i++)
        printf("%d\n", a[i]);
    return 0;
}

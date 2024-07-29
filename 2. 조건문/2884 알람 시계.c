#include <stdio.h>

int main(void)
{
    int h, m;

    scanf("%d %d", &h, &m);

    if (m < 45) {
        h--;
        m = 60 - (45 - m);

        if (h < 0) {
            h = 23;
        }
    }

    else {
        m = m - 45;
    }

    printf("%d %d\n", h, m);

    return 0;
}
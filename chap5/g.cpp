#include <stdio.h>

int main()
{
    int x1, y1, x2, y2, a, b, jarak;

    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);

    a = x1 - x2;
    b = y1 - y2;

    if (a < 0)
    {
        a *= -1;
    }
    if (b < 0)
    {
        b *= -1;
    }

    jarak = a + b;

    printf("%d\n", jarak);
}
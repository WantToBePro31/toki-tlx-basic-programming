#include <stdio.h>
#include <math.h>

int komposisi_fungsi(int a, int b, int k, int x)
{
    int y;
    y = abs(a * x + b);
    if (k == 1)
        return y;
    else
        return komposisi_fungsi(a, b, k - 1, y);
}

int main()
{
    int a, b, k, x, y;
    scanf("%d%d%d%d", &a, &b, &k, &x);
    printf("%d\n", komposisi_fungsi(a, b, k, x));
    return 0;
}
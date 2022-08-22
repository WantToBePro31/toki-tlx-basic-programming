#include <stdio.h>
#include <stdlib.h>

int reverse(int x)
{
    int temp = x;
    int ret = 0;

    while (temp > 0)
    {
        ret = (ret * 10) + (temp % 10);
        temp = temp / 10;
    }
    return ret;
}

int main()
{
    int a, b, a1, b1, c;
    scanf("%d%d", &a, &b);

    a1 = reverse(a);
    b1 = reverse(b);
    c = a1 + b1;
    printf("%d\n", reverse(c));
    return 0;
}
#include <stdio.h>

int faktorial_ganjilgenap(int n)
{
    int x;
    if (n == 1)
        return n;
    else
    {
        if (n % 2 == 0)
        {
            x = n / 2;
            return x *= faktorial_ganjilgenap(n - 1);
        }
        else
        {
            return n *= faktorial_ganjilgenap(n - 1);
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", faktorial_ganjilgenap(n));
    return 0;
}
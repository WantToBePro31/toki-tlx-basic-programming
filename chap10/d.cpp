#include <stdio.h>
#include <math.h>

int jmlh = 0;

int cek_prima(int div)
{
    int f = 0;
    if (div == 2 || div == 3)
        return 1;
    else if (div % 2 == 0)
        return 0;
    else
    {
        for (int k = 3; k <= trunc(sqrt(div)); k += 2)
        {
            if (div % k == 0)
            {
                f += 1;
                break;
            }
        }
        if (f == 0)
            return 1;
        else
            return 0;
    }
}

int divisor(int n, int div)
{
    if (n % div != 0)
        return jmlh;
    else
    {
        jmlh += 1;
        return divisor(n / div, div);
    }
}

void faktorisasiGenap(int n)
{
    int x, div = 2;
    while (n != 1)
    {
        x = divisor(n, div);
        jmlh = 0;
        n /= pow(div, x);
        if (x == 1)
        {
            printf("%d", div);
            if (n != 1)
                printf(" x ");
        }
        else if (x > 1)
        {
            printf("%d^%d", div, x);
            if (n != 1)
                printf(" x ");
        }
        div++;
        while (cek_prima(div) == 0 && n % div != 0)
            div++;
    }
    printf("\n");
}

void faktorisasiGanjil(int n)
{
    int x, div = 3;
    while (n != 1)
    {
        x = divisor(n, div);
        jmlh = 0;
        n /= pow(div, x);
        if (x == 1)
        {
            printf("%d", div);
            if (n != 1)
                printf(" x ");
        }
        else if (x > 1)
        {
            printf("%d^%d", div, x);
            if (n != 1)
                printf(" x ");
        }
        div++;
        while (cek_prima(div) == 0 && n % div != 0)
            div++;
    }
    printf("\n");
}

int main()
{
    int n;
    scanf("%d", &n);

    if (n % 2 == 0)
        faktorisasiGenap(n);
    else
        faktorisasiGanjil(n);
    return 0;
}

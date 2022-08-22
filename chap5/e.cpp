#include <stdio.h>

int main()
{
    int N, a;

    scanf("%d", &N);

    a = N / 10;

    if (a == 0)
    {
        printf("satuan\n");
    }
    else if (a >= 1 && a <= 9)
    {
        printf("puluhan\n");
    }
    else if (a >= 10 && a <= 99)
    {
        printf("ratusan\n");
    }
    else if (a >= 100 && a <= 999)
    {
        printf("ribuan\n");
    }
    else if (a >= 1000 && a <= 9999)
    {
        printf("puluhribuan\n");
    }
    return 0;
}
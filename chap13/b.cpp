#include <stdio.h>

int x;

void pegunungan(int a)
{
    if (a > 0)
    {
        pegunungan(a - 1);
        for (x = 0; x < a; x++)
        {
            printf("*");
        }
        printf("\n");
        pegunungan(a - 1);
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    pegunungan(n);
    return 0;
}
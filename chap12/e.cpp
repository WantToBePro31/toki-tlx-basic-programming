#include <stdio.h>
#include <stdlib.h>

void rekursiBiner(int n)
{
    if (n == 1)
        printf("1");
    else if (n % 2 == 1)
    {
        rekursiBiner(n / 2);
        printf("1");
    }
    else
    {
        rekursiBiner(n / 2);
        printf("0");
    }
}

int main()
{
    int n, arr[100];
    scanf("%d", &n);

    rekursiBiner(n);
    return 0;
}

#include <stdio.h>

int main()
{
    int N;

    scanf("%d", &N);

    while (N % 2 == 0)
    {
        N = N / 2;
    }
    if (N == 1)
    {
        printf("ya\n");
    }
    else
    {
        printf("bukan\n");
    }
    return 0;
}
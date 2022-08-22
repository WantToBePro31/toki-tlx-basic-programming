#include <stdio.h>

int main()
{
    int N, sum = 0, Bi, i;

    scanf("%d", &N);

    for (i = 1; i <= N; i++)
    {
        scanf("%d", &Bi);
        sum += Bi;
    }
    printf("%d\n", sum);
}
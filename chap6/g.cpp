#include <stdio.h>

int main()
{
    int N, Bi[100], i, max, min;

    scanf("%d", &N);

    for (i = 1; i <= N; i++)
    {
        scanf("%d", &Bi[i]);
    }
    max = Bi[1];
    min = Bi[1];
    for (i = 1; i <= N; i++)
    {
        if (Bi[i] >= max)
        {
            max = Bi[i];
        }
        else if (Bi[i] <= min)
        {
            min = Bi[i];
        }
    }
    printf("%d %d\n", max, min);
}
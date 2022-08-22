#include <stdio.h>

int main()
{
    int N, i, j, sum = 0;

    scanf("%d", &N);

    for (i = 1; i <= N; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", sum);
            sum += 1;
            if (sum == 10)
            {
                sum -= 10;
            }
        }
        printf("\n");
    }
    return 0;
}
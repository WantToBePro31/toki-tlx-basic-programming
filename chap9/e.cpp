#include <stdio.h>
#define max 103

int main()
{
    int m, n, p, arr[max][max], data[max][max], c, d;

    scanf("%d%d%d", &m, &n, &p);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            scanf("%d", &data[i][j]);
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            c = 0;
            for (int k = 0; k < n; k++)
            {
                d = arr[i][k] * data[k][j];
                c += d;
            }
            printf("%d", c);
            if (j != (p - 1))
                printf(" ");
            else
                printf("\n");
        }
    }
}
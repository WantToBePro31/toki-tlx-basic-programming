#include <stdio.h>
#define max 103

int main()
{
    int m, n, arr[max][max], a, b;

    scanf("%d%d", &m, &n);

    a = m - 1;
    b = 0;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = a; j >= 0; j--)
        {
            printf("%d", arr[j][b]);
            if (j > 0)
                printf(" ");
            else
                printf("\n");
        }
        b++;
    }
}
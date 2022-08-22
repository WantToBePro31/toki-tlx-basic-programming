#include <stdio.h>
#include <stdlib.h>

int arr[2][1003];

void swap(int a, int b, int c, int d)
{
    int tmp = arr[a][c];
    arr[a][c] = arr[b][d];
    arr[b][d] = tmp;
}

int main()
{
    int n, t;
    scanf("%d", &n);

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int x, y;
        char p[5], q[5];
        scanf("%s %d %s %d", p, &x, q, &y);
        int c = p[0] - 'A';
        int d = q[0] - 'A';
        swap(c, d, x - 1, y - 1);
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d", arr[i][j]);
            if (j < n - 1)
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
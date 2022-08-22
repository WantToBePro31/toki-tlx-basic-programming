#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void cek(int n, int x[], int y[], int d)
{
    int t, besar, kecil;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            t = pow(abs(x[j] - x[i]), d) + pow(abs(y[j] - y[i]), d);
            if (i == 0 && j == 1)
            {
                besar = t;
                kecil = t;
            }
            if (t > besar)
                besar = t;
            if (t < kecil)
                kecil = t;
        }
    }
    printf("%d %d\n", kecil, besar);
}

int main()
{
    int n, d, x[1003], y[1003];
    scanf("%d%d", &n, &d);

    for (int i = 0; i < n; i++)
        scanf("%d%d", &x[i], &y[i]);
    cek(n, x, y, d);
}
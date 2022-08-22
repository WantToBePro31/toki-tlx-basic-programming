#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void cek(int p)
{
    int f = 0;
    for (int k = 1; k <= p; k++)
    {
        if (p % k == 0)
        {
            f += 1;
            if (f == 5)
                break;
        }
    }
    if (f <= 4)
        printf("YA\n");
    else
        printf("BUKAN\n");
}

int main()
{
    int n, p;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &p);
        cek(p);
    }
    return 0;
}

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, p, f;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        f = 0;
        scanf("%d", &p);
        if (p == 2 || p == 3)
            printf("YA\n");
        else if (p % 2 == 0)
            printf("BUKAN\n");
        else
        {
            if (p == 1)
                printf("BUKAN\n");
            else
            {
                for (int k = 3; k <= trunc(sqrt(p)); k += 2)
                {
                    if (p % k == 0)
                    {
                        f += 1;
                        break;
                    }
                }
                if (f == 0)
                    printf("YA\n");
                else
                    printf("BUKAN\n");
            }
        }
    }
    return 0;
}

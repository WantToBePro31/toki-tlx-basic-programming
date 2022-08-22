#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    for (int b = a; a >= b && b > 0; b--)
    {
        if (a % b == 0)
        {
            printf("%d\n", b);
        }
    }
    return 0;
}

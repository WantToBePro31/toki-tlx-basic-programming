#include <stdio.h>

int main()
{
    int sum = 0, i;

    while (scanf("%d", &i) != EOF)
    {
        sum += i;
    }
    printf("%d\n", sum);
    return 0;
}
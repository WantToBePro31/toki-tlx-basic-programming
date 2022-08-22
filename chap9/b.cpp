#include <stdio.h>

int main()
{
    int n = 0, arr[103];

    while (scanf("%d", &arr[n]) != EOF)
    {
        n++;
    }
    while (n > 0)
    {
        printf("%d\n", arr[n - 1]);
        n--;
    }
}
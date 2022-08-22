#include <stdio.h>

int main()
{
    char a[100];

    while (scanf("%s", a) != EOF)
    {
        printf("%s\n", a);
    }
    return 0;
}

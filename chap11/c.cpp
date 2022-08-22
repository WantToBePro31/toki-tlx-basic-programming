#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s1[200];
    int c, k;
    scanf(" %s", &s1);
    scanf("%d", &k);

    c = strlen(s1);
    for (int i = 0; i < c; i++)
    {
        int x = (int)s1[i];
        x += k;
        if (x > 122)
            x -= 26;
        char s = (char)x;
        printf("%c", s);
    }
    printf("\n");
}
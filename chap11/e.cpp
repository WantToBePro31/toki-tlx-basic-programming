#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s1[200];
    int c;
    scanf(" %s", &s1);

    c = strlen(s1);
    for (int i = 0; i < c; i++)
    {
        int x = (int)s1[i];
        if (x >= 65 && x <= 90)
            x += 32;
        else
            x -= 32;
        char s = (char)x;
        printf("%c", s);
    }
    printf("\n");
}
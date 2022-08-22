#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int c;

int cek(char s[])
{
    for (int i = 0; i < c; i++)
    {
        int x = (int)s[i];
        if (x == 95)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    char s1[200];
    int stat;
    scanf(" %s", &s1);

    c = strlen(s1);
    stat = cek(s1);

    if (stat == 1)
    {
        for (int i = 0; i < c; i++)
        {
            int x = (int)s1[i];
            if (x == 95)
            {
                i++;
                x = (int)s1[i];
                x -= 32;
            }
            char s = (char)x;
            printf("%c", s);
        }
    }
    else
    {
        for (int i = 0; i < c; i++)
        {
            int x = (int)s1[i];
            if (x >= 65 && x <= 90)
            {
                printf("_");
                x += 32;
            }
            char s = (char)x;
            printf("%c", s);
        }
    }
    printf("\n");
}
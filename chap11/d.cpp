#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s1[200], s2[200], s3[200], s4[200], news[200];
    int j = 0, k, flag = 0, n = 0, stat;
    gets(s1);
    gets(s2);
    gets(s3);
    gets(s4);

    for (int i = 0; s1[i] != NULL; i++)
    {
        k = i;
        while (s1[i] == s2[j])
        {
            i++;
            j++;
            if (j == strlen(s2))
            {
                flag = 1;
                break;
            }
        }
        j = 0;
        if (flag == 0)
            i = k;
        else
            flag = 0;
        s1[n++] = s1[i];
    }
    s1[n] = '\0';

    n = 0;
    j = 0;
    stat = 0;
    for (int i = 0; s1[i] != NULL; i++)
    {
        if (stat == 0)
        {
            while (s1[i] == s3[j])
            {
                i++;
                j++;
                if (j == strlen(s3))
                {
                    flag = 1;
                    stat = 1;
                    for (int x = 0; x < strlen(s3); x++)
                    {
                        news[n++] = s3[x];
                    }
                    for (int x = 0; x < strlen(s4); x++)
                    {
                        news[n++] = s4[x];
                    }
                    break;
                }
            }
        }
        news[n++] = s1[i];
    }
    news[n] = '\0';
    printf("%s\n", news);
    return 0;
}
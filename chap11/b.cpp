#include <stdio.h>
#include <string.h>

int cek(char str[], char kata[])
{
    int j = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        int k = i;
        while (str[i] == kata[j])
        {
            i++;
            j++;
            if (j == strlen(kata))
            {
                return 1;
            }
        }
        i = k;
        j = 0;
    }
    return 0;
}

int main()
{
    char str[103], kata[103], k, j, flag, n;
    scanf("%s%s", str, kata);

    while (cek(str, kata) == 1)
    {
        j = 0;
        flag = 0;
        n = 0;
        for (int i = 0; str[i] != NULL; i++)
        {
            k = i;
            while (str[i] == kata[j])
            {
                i++;
                j++;
                if (j == strlen(kata))
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
            str[n++] = str[i];
        }
        str[n] = '\0';
    }
    printf("%s\n", str);
    return 0;
}

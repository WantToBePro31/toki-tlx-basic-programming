#include <stdio.h>
#define max 100000

int main()
{
    int n, count, arr[max], modus, p = 1;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    modus = arr[0];
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > 0)
        {
            count = 1;
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] == arr[j])
                {
                    arr[j] = 0;
                    count++;
                }
            }
            if (count > p)
            {
                p = count;
                modus = arr[i];
            }
            else if (count == p)
            {
                if (arr[i] > modus)
                {
                    p = count;
                    modus = arr[i];
                }
            }
        }
    }
    printf("%d\n", modus);
    return 0;
}

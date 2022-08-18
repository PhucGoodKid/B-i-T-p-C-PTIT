#include <stdio.h>

int a[100];
main()
{
    int i, j, n, k, dem = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        j = i + 1;
        while (j < n)
            if (a[i] == a[j])
            {
                for (k = j; k < n - 1; k++)
                    a[k] = a[k + 1];
                n = n - 1;
            }
            else
                j = j + 1;
    }
    n--;
    for (i = 0; i < n + 1; i++)
    {
        printf(" %d ", a[i]);
    }
}
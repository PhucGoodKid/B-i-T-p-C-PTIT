#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    for (int o = 1; o <= t; o++)
    {
        int a[10], b[10], n;
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &b[i]);
        }

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[i] > a[j])
                {
                    int tmp = a[i];
                    a[i] = a[j];
                    a[j] = tmp;
                }
            }
        }
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (b[i] < b[j])
                {
                    int tmp = b[i];
                    b[i] = b[j];
                    b[j] = tmp;
                }
            }
        }
        printf("Test %d:\n", o);
        int l = n + n;
        int index1 = 0, index2 = 0;
        for (int i = 0; i < l; i++)
        {
            if (i % 2)
            {
                printf("%d ", b[index2++]);
            }
            else
            {
                printf("%d ", a[index1++]);
            }
        }
        printf("\n");
    }
}
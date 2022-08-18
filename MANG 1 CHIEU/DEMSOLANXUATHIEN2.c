#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int c = 1; c <= t; c++)
    {

        int n;
        scanf("%d", &n);
        int i, a[100];
        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        int j, k;
        printf("Test %d:\n", c);
        for (i = 0; i < n; i++)
        {
            int dem = 0;
            for (j = 0; j < n; j++)
            {
                if (a[i] == a[j])
                {
                    if (i != j)
                    {
                        for (k = j; k < n; k++)
                        {
                            a[k] = a[k + 1];
                        }
                        n--;
                        j--;
                    }
                    dem++;
                }
            }
            if (dem != 0)
            {
                printf("%d xuat hien %d lan\n", a[i], dem);
            }
        }
    }
    return 0;
}
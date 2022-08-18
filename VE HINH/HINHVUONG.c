#include <stdio.h>
#include <math.h>
int main()
{
    int n, m;
    scanf("%d", &m);
    n = m * 2 - 1;
    int k = 0, b = n;
    int a[n][n];
    while (n > 0)
    {
        for (int i = k; i < n; i++)
            for (int j = k; j < n; j++)
                a[i][j] = m - k;
        k++;
        n--;
    }
    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < b; j++)
            printf("%d", a[i][j]);
        printf("\n");
    }
}
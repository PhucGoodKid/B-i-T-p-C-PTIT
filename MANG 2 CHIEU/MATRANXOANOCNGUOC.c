#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    scanf("%d", &a);
    int test = 1;
    while (a--)
    {

        int n;
        scanf("%d", &n);
        int d = 0, k = n * n;
        int a[150][150];
        int x = n - 1;
        int y = n - 1;
        while (d <= n / 2)
        {
            for (int i = d; i <= y; i++)
                a[d][i] = k--;
            for (int i = d + 1; i <= x; i++)
                a[i][y] = k--;
            for (int i = y - 1; i >= d; i--)
                a[x][i] = k--;
            for (int i = x - 1; i > d; i--)
                a[i][d] = k--;
            d++;
            x--;
            y--;
        }
        printf("Test %d:\n", test);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }
        test++;
        printf("\n");
    }
    return 0;
}
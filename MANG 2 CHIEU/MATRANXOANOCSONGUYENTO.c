#include <stdio.h>
#include <math.h>
int prime(int n)
{
    if (n < 2)
        return 0;
    if (n == 2)
        return 1;
    if (n % 2 == 0)
        return 0;
    int i;
    for (i = 3; i <= sqrt(n); i += 2)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int SNT[363] = {0};
void primearr()
{
    SNT[0] = 2;
    int i, j = 1;
    for (i = 3;; i += 2)
    {
        if (prime(i))
        {
            SNT[j] = i;
            j++;
        }
        if (j == 362)
            return;
    }
}
int main()
{
    int a;
    scanf("%d", &a);
    int test = 1;
    while (a--)
    {
        primearr();
        int n, k = 1, d = 0;
        scanf("%d", &n);
        int a[150][150];
        int x = n - 1;
        int y = n - 1;
        int index = 0;
        while (d <= n / 2)
        {
            for (int i = d; i <= y; i++)
                a[d][i] = SNT[index++];
            for (int i = d + 1; i <= x; i++)
                a[i][y] = SNT[index++];
            for (int i = y - 1; i >= d; i--)
                a[x][i] = SNT[index++];
            for (int i = x - 1; i > d; i--)
                a[i][d] = SNT[index++];
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
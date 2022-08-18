#include <stdio.h>
#include <math.h>
long long FiboNum[82];

void init()
{
    FiboNum[0] = 00;
    FiboNum[1] = 1;
    for (int i = 2; i <= 82; i++)
    {
        FiboNum[i] = FiboNum[i - 1] + FiboNum[i - 2];
    }
}
int main()
{
    init();
    int n, k = 1, d = 0;
    scanf("%d", &n);
    long long a[9][9];
    int x = n - 1;
    int y = n - 1;
    int index = 0;
    while (d <= n / 2)
    {
        for (int i = d; i <= y; i++)
            a[d][i] = FiboNum[index++];
        for (int i = d + 1; i <= x; i++)
            a[i][y] = FiboNum[index++];
        for (int i = y - 1; i >= d; i--)
            a[x][i] = FiboNum[index++];
        for (int i = x - 1; i > d; i--)
            a[i][d] = FiboNum[index++];
        d++;
        x--;
        y--;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%lld ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
#include <stdio.h>
#define DEC_10 10
#include <math.h>
int isThuanNghich(int n)
{
    int a[20];
    int dem = 0, i;
    // phan tich n thanh mang cac chu so
    do
    {
        a[dem++] = (n % DEC_10);
        n = n / DEC_10;
    } while (n > 0);
    // kiem tra tinh thuan nghich
    for (i = 0; i < (dem / 2); i++)
    {
        if (a[i] != a[(dem - i - 1)])
        {
            return 0;
        }
    }
    return 1;
}
int prime(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int m, n;
        scanf("%d%d", &m, &n);
        do
        {
            int dem = 0;
            for (int i = m; i <= n; i++)
            {

                if (isThuanNghich(i) * prime(i))
                {
                    printf("%d ", i);
                    dem++;
                }
                if (dem == 10)
                {

                    printf("\n");
                    dem = 0;
                }
            }
            break;
        } while (10 < m && m < n);
        printf("\n");
    }
}
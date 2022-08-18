#include <stdio.h>
#define DEC_10 10
#include <math.h>
int isThuanNghich(long long n)
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
int tongcs(long long n)
{
    while (n)
    {
        int a = n % 10;
        if (a % 2 == 0)
        {
            return 0;
            break;
        }
        n /= 10;
    }
    return 1;
}
int chuso(long n)
{
    int sum = 0;
    while (n)
    {
        int a = n % 10;
        sum += a;
        n /= 10;
    }
    if (sum % 2 == 0)
        return 0;
    return 1;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long n;
        scanf("%lld", &n);
        if (isThuanNghich(n) * chuso(n) * tongcs(n))
        {
            printf("YES\n");
        }
        else
            printf("NO\n");
    }
}

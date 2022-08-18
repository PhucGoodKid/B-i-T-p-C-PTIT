#include <stdio.h>
#include <math.h>
int tn(int a)
{
    long long s = 0, n = a;
    while (a > 0)
    {
        s = s * 10 + (a % 10);
        a /= 10;
    }
    if (s == n)
        return 1;
    else
        return 0;
}
int check(int n)
{
    while (n)
    {
        if (n % 10 == 9)
        {
            return 0;
        }
        n /= 10;
    }
    return 1;
}
int main()
{
    int n, count = 0;
    scanf("%d", &n);
    for (int i = 2; i <= n; i++)
    {
        if (tn(i) * check(i))
        {
            printf("%d ", i);
            count++;
        }
    }
    printf("\n%d", count);
}
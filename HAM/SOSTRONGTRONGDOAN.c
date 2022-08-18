#include <stdio.h>
int giaithua(int a)
{
    unsigned long long i, t = 1;
    if (a == 0)
        t = 1;
    else
    {
        for (i = 1; i <= a; i++)
            t *= i;
    }
    return t;
}
int strong(int n)
{
    int m = n;
    int sum = 0;
    while (n > 0)
    {
        int a = n % 10;
        sum += giaithua(a);
        n /= 10;
    }
    if (sum == m)
        return 1;
    return 0;
}
int main()
{
    int m, n;
    scanf("%d%d", &m, &n);
    if (m > n)
    {
        int temp = m;
        m = n;
        n = temp;
    }
    for (int i = m; i <= n; i++)
    {
        if (strong(i))
            printf("%d ", i);
    }
}
#include <stdio.h>
#include <math.h>
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
int csnt(int n)
{
    int a = 0;
    while (n)
    {
        int a = n % 10;
        if (prime(a) == 0)
        {
            return 0;
            break;
        }
        n /= 10;
    }
    return 1;
}
int main()
{
    int a;
    scanf("%d", &a);
    while (a--)
    {
        int m, n;
        int count = 0;
        scanf("%d%d", &m, &n);
        for (int j = m; j <= n; j++)
        {
            if (prime(j) && csnt(j))
                count++;
        }
        printf("%d\n", count);
    }
}

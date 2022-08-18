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
    for (int i = 3; i <= sqrt(n); i += 2)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int cs(int n)
{

    while (n)
    {
        int a = n % 10;
        if (a != 2 && a != 3 && a != 5 && a != 7)
        {
            return 0;
            break;
        }
        n /= 10;
    }
    return 1;
}
int tong(int n)
{
    int sum = 0;
    while (n)
    {
        int a = n % 10;
        sum += a;
        n /= 10;
    }
    if (prime(sum))
        return 1;
    return 0;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int m, n;
        scanf("%d%d", &m, &n);
        int count = 0;
        for (int i = m; i <= n; ++i)
        {
            /* code */
            if (prime(i) && cs(i) && tong(i))
            {
                count++;
            }
        }
        printf("%d\n", count);
    }
}
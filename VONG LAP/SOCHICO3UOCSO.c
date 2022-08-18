#include <stdio.h>
#include <math.h>
int prime(long long n)
{

    if (n < 2)
        return 0;
    if (n <= 3)
        return 1;

    if (n % 2 == 0 || n % 3 == 0)
        return 0;

    for (long long i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return 0;

    return 1;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long a, b;
        scanf("%lld %lld", &a, &b);
        int count = 0;
        for (long long i = a; i * i <= b; i++)
            if (prime(i))
                count++;
        printf("%d\n", count);
    }
}
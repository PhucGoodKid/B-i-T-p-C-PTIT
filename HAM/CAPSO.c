#include <stdio.h>
int gcd(long long a, long long b)
{
    if (a == 0 || b == 0)
    {
        return a + b;
    }
    while (a != b)
    {
        if (a > b)
        {
            a -= b; // a = a - b
        }
        else
        {
            b -= a;
        }
    }
    return a;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long a, b, c, d;
        scanf("%lld %lld%lld%lld", &a, &b, &c, &d);
        if (gcd(a, b) == gcd(c, d))
            printf("YES\n");
        else
            printf("NO\n");
    }
}
#include <stdio.h>
#include <math.h>
int GCD(long long a, long long b)
{
    if (b == 0)
        return a;
    return GCD(b, a % b);
}
int LCM(long long a, long long b)
{

    return (a * b) / GCD(a, b);
}
int main()
{
    long long a, b;
    scanf("%lld %lld", &a, &b);
    printf("%lld\n%lld\n", GCD(a, b), LCM(a, b));
    return 0;
}
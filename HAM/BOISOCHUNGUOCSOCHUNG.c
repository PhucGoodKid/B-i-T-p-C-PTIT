#include <stdio.h>
int gcd(long long a, long long b)
{
    // Nếu a = 0 => ucln(a,b) = b
    // Nếu b = 0 => ucln(a,b) = a
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
    return a; // return a or b, bởi vì lúc này a và b bằng nhau
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long a, b;
        scanf("%lld %lld", &a, &b);

        long long lcm = (a * b) / gcd(a, b);
        printf("%lld ", lcm);
        printf("%d\n", gcd(a, b));
    }
}
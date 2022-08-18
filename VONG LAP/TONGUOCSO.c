#include <stdio.h>
#include <math.h>
// sang nguyen to
int process(int n)
{
    long long tong = 0;
    while (n % 2 == 0)
    {
        tong += 2;
        n /= 2;
    }
    for (int j = 3; j <= sqrt(n); j += 2)
    {
        while (n % j == 0)
        {
            tong += j;
            n /= j;
        }
    }
    if (n > 2)
    {
        tong += n;
    }
    return tong;
}
int main()
{
    int a, n;
    long long sum = 0;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        scanf("%d", &n);
        sum += process(n);
    }
    printf("%lld", sum);
}
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

int main()
{
    long n, a, s = 0, m;
    scanf("%ld", &n);
    m = n;
    while (n > 0)
    {
        a = n % 10;
        s += giaithua(a);
        n = n / 10;
    }
    if (m == s)
        printf("1");
    else
        printf("0");
    return 0;
}

#include <stdio.h>

#include <math.h>

#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    long count = 0, min_dai = 10000000, min_rong = 10000000;
    while (n--)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        if (min_dai > a)
            min_dai = a;
        if (min_rong > b)
            min_rong = b;
    }
    printf("%ld", min_dai * min_rong);
}

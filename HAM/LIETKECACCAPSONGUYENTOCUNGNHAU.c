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
    int a, b, i, j;
    scanf("%d %d", &a, &b);
    for (i = a; i < b; i++)
    {
        for (j = a + 1; j <= b; j++)
        {
            if (GCD(j, i) == 1)
            {
                if (j > i)
                    printf("(%d,%d)\n", i, j);
            }
        }
    }
    return 0;
}
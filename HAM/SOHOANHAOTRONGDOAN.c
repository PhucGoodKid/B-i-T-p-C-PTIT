#include <stdio.h>
int shh(int n)
{
    int s = 1;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (n == i * i)
            {
                s += i;
            }
            else
            {
                s += i + n / i;
            }
        }
    }
    if (s == n)
    {
        return 1;
    }
    else
        return 0;
}
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    int min, max;
    if (a > b)
    {
        max = a;
        min = b;
    }
    else
    {
        max = b;
        min = a;
    }

    for (int j = min; j <= max; j++)
    {
        if (j == 1)
            continue;
        if (shh(j))
        {
            printf("%d ", j);
        }
    }
}
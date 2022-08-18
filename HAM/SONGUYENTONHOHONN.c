#include <stdio.h>
#include <math.h>

int checker(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    scanf("%d", &n);
    if (n >= 2)
        printf("2\n");
    for (int i = 3; i < n; i += 2)
    {
        if (checker(i) == 1)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
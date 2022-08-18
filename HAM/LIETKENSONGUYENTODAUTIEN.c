#include <stdio.h>
#include <math.h>

int so_nguyen_to(int n)
{
    if (n < 2)
        return 0;
    int i;
    for (i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int n;
    scanf("%d", &n);
    int count = 0;
    int i = 2;
    while (n > count)
    {
        if (so_nguyen_to(i) == 1)
        {
            printf("%d\n", i);
            count++;
        }
        i++;
    }
    return 0;
}
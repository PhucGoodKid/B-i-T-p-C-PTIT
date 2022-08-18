#include <stdio.h>
#include <math.h>
int check(int a)
{
    int b = a, c = 0, sum = 0;
    while (b > 0)
    {
        if (b % 10 == 4)
            return 0;
        sum += b % 10;
        c = c * 10 + b % 10;
        b /= 10;
    }
    if (a == c && sum % 10 == 0)
        return 1;
    return 0;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        for (int i = pow(10, n - 1); i < pow(10, n); i++)
            if (check(i) == 1)
                printf("%d ", i);
        printf("\n");
    }
}
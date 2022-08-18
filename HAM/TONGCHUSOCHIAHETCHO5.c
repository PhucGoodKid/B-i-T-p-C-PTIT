#include <stdio.h>
#include <math.h>
int prime(int n)
{
    if (n < 2)
        return 0;
    if (n == 2)
        return 1;
    if (n % 2 == 0)
        return 0;
    for (int i = 3; i <= sqrt(n); i += 2)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int cs(int n)
{
    int sum = 0;
    while (n > 0)
    {
        int a = n % 10;
        sum += a;
        n /= 10;
    }
    if (sum % 5 == 0)
        return 1;
    return 0;
}
int main()
{
    int n, count = 0;
    scanf("%d", &n);
    for (int j = 5; j <= n; j++)
    {
        if (cs(j) && prime(j))
        {
            printf("%d ", j);
            count++;
        }
    }
    printf("\n%d", count);
}
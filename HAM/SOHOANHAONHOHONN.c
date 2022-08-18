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
    int n;
    scanf("%d", &n);
    for (int j = 2; j < n; j++)
    {
        if (shh(j))
        {
            printf("%d ", j);
        }
    }
}
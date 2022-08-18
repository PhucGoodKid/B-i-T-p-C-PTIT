#include <stdio.h>
#include <math.h>
int primeNum(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int fb(int n)
{
    if (n < 4)
        return n;
    return fb(n - 1) + fb(n - 2);
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (a < b)
    {
        for (int i = a; i <= b; i++)
        {
            int sum = 0;
            int temp = i;
            while (temp > 0)
            {
                sum += temp % 10;
                temp /= 10;
            }
            for (int j = 0; j <= sum; j++)
            {
                if (sum == fb(j) && primeNum(i) == 1)
                    printf("%d ", i);
            }
        }
    }

    if (a > b)
    {
        for (int i = b; i <= a; i++)
        {
            int sum = 0;
            int temp = i;
            while (temp > 0)
            {
                sum += temp % 10;
                temp /= 10;
            }
            for (int j = 0; j <= sum; j++)
            {
                if (sum == fb(j) && primeNum(i) == 1)
                    printf("%d ", i);
            }
        }
    }
    return 0;
}
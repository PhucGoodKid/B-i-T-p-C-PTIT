#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long n;
        long i = 2;
        scanf("%ld", &n);
        while (i <= n / i)
        {

            int max, temp;
            if (n % i == 0)
            {
                n /= i;
            }
            else
                i++;
        }
        printf("%ld\n", n);
    }
}
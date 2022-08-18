#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        printf("%d = ", n);
        for (int i = 2; i <= n; i++)
        {
            int count = 0;
            while (n % i == 0)
            {
                n /= i;
                count++;
            }
            if (count)
            {
                if (count >= 1)
                    printf("%d^%d", i, count);
                if (n > i)
                    printf(" * ");
            }
        }
        printf("\n");
    }
    return 0;
}
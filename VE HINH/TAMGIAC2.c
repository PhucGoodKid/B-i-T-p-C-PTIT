#include <stdio.h>
int even(int n)
{
    if (n % 2 == 0)
        return 1;
    return 0;
}

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (even(i))
        {
            for (int j = 2; j <= 2 * i; j += 2)
            {
                printf("%d", j);
            }
        }
        else
        {
            for (int k = 1; k <= 2 * i; k += 2)
            {
                printf("%d", k);
            }
        }
        printf("\n");
    }
}
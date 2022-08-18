#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int r = n - i; r >= 1; r--)
            printf("~");
        for (int j = 1; j <= 2 * i - 1; j += 2)
        {
            printf("%d", j);
        }
        for (int k = 2 * i - 3; k >= 1; k -= 2)
        {
            printf("%d", k);
        }
        printf("\n");
    }
}
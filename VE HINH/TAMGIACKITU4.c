#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        // for (int r=n-i;r>=1;r--) printf("~");
        for (int j = 2; j <= 2 * i; j += 2)
        {
            int chu1 = j + 62;
            printf("%c", chu1);
        }
        for (int k = 2 * i - 2; k >= 1; k -= 2)
        {
            int chu2 = k + 62;
            printf("%c", chu2);
        }
        printf("\n");
    }
}
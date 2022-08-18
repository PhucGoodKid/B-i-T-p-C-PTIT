#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int step = n;
    for (int i = 1; i <= n; i++)
    {
        int step = 64;
        for (int j = 1; j <= i; j++)
        {

            char k = step + i;
            printf("%c ", k);
            step += n - j;
        }
        printf("\n");
    }
}

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int step = n;
    for (int i = 1; i <= n; i++)
    {
        int step = 0;
        for (int j = 1; j <= i; j++)
        {

            int k = step + i;
            printf("%d ", k);
            step += n - j;
        }
        printf("\n");
    }
}

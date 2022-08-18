#include <stdio.h>
int main()
{
    int a, b, i, u, x, t = 2;
    scanf("%d %d\n", &a, &b);
    for (i = 1; i <= a; i++)
    {
        printf("%d", i);
        for (u = 1; u < b; u++)
        {
            x = u + i;
            if (x > b)
            {
                x = x - t;
                t += 2;
            }
            printf("%d", x);
        }
        printf("\n");
        t = 2;
    }
}
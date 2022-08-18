#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, sum = 0;
        scanf("%d", &a);
        for (int i = 1;; i++)
        {
            if (a == 0)
                break;
            int so_cuoi = a % 10;
            sum += so_cuoi;
            a /= 10;
        }
        if (sum % 10 == 0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
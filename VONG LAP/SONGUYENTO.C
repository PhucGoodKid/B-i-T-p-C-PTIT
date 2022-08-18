#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        int a;
        scanf("%d", &a);
        int dem = 0;
        if (a < 2)
        {
            printf("NO\n");
        }
        else
        {
            for (int i = 2; i <= sqrt(a); i++)
            {
                if (a % i == 0)
                {
                    dem++;
                    break;
                }
            }
            if (dem == 0)
                printf("YES\n");
            else
                printf("NO\n");
        }
    }
}
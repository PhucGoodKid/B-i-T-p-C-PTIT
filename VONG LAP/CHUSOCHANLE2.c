#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        int odd = 0, even = 0;
        int a;
        scanf("%d", &a);
        for (int i = 1;; i++)
        {
            if (a == 0)
                break;
            int so_du = a % 10;
            if (so_du % 2 == 0)
                even++;
            else
                odd++;
            a /= 10;
        }
        printf("%d %d\n", odd, even);
    }
    return 0;
}
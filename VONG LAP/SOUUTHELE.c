#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long n, chan = 0, le = 0;
        scanf("%lld", &n);
        if (n % 2 == 0)
            printf("NO\n");
        else
        {
            for (int i = 1; n > 0; i++)
            {
                int so_cuoi = n % 10;
                if (so_cuoi % 2 == 0)
                    chan++;
                else
                    le++;
                n /= 10;
            }
            if (chan < le)
                printf("YES\n");
            else
                printf("NO\n");
        }
    }
    return 0;
}
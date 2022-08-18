#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        char ktu = ' ';
        int odd = 0, even = 0, dem = 0;
        while (ktu == ' ')
        {
            scanf("%d", &n);
            dem++;
            if (n % 2)
                odd++;
            else
                even++;
            ktu = getchar();
        }
        if (dem % 2 == 0 && even > odd || dem % 2 == 1 && even < odd)
        {
            printf("YES\n");
        }
        else
            printf("NO\n");
    }
}
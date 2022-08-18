#include <stdio.h>
int main()
{
    int t;
    int n, dem, temp, p, i;
    scanf("%d", &t);
    while (t--)
    {
        dem = 0;
        scanf("%d %d", &n, &p);
        i = 1;
        while (p * i <= n)
        {
            temp = p * i;
            while (temp % p == 0)
            {
                temp /= p;
                dem++;
            }
            ++i;
        }
        printf("%d\n", dem);
    }
    return 0;
}
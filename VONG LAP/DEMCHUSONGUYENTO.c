#include <stdio.h>

int main()
{
    long long n;
    scanf("%lld", &n);
    int c2 = 0, c3 = 0, c5 = 0, c7 = 0;
    int a;
    while (n)
    {
        a = n % 10;
        switch (a)
        {
        case 2:
        {
            c2++;
            break;
        }
        case 3:
        {
            c3++;
            break;
        }
        case 5:
        {
            c5++;
            break;
        }
        case 7:
        {
            c7++;
            break;
        }
        }

        n /= 10;
    }
    if (c2 != 0)
        printf("2 %d\n", c2);
    if (c3 != 0)
        printf("3 %d\n", c3);
    if (c5 != 0)
        printf("5 %d\n", c5);
    if (c7 != 0)
        printf("7 %d\n", c7);
}
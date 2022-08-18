#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int count = 0;
        int a[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
        for (int i = 9; i >= 0; i--)
        {
            if (n >= a[i])
            {
                n -= a[i];
                count++;
                i++;
            }
            if (n == 0)
                break;
        }
        printf("%d\n", count);
    }
}
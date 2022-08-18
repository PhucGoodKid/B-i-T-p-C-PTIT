#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[100];
    a[0] = 0;
    a[1] = 1;
    if (n == 1)
        printf("%d ", a[0]);
    if (n == 2)
        printf("%d %d ", a[0], a[1]);
    if (n > 2)
    {
        printf("%d %d ", a[0], a[1]);
        for (int i = 2; i < n; i++)
        {
            a[i] = a[i - 1] + a[i - 2];
            printf("%d ", a[i]);
        }
    }
    return 0;
}

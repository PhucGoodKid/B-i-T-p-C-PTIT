#include <stdio.h>

int main()
{
    int n, a[10];
    scanf("%d", &n);
    int i = 0;
    while (n > 0)
    {

        a[i] = n % 10;
        n /= 10;
        i++;
    }
    if (a[0] != 0)
        printf("%d", a[0]);
    for (int j = i - 2; j >= 1; j--)
    {
        printf("%d", a[j]);
    }
    printf("%d\n", a[i - 1]);
}
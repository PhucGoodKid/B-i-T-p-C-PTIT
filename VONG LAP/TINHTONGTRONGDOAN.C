#include <stdio.h>
#include <math.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int n, tong;
    if (b - a > 0)
    {
        n = b - a + 1;
        tong = (b + a) * n / 2;
    }
    else
    {
        n = a - b + 1;
        tong = (b + a) * n / 2;
    }
    printf("%d ", tong);
}

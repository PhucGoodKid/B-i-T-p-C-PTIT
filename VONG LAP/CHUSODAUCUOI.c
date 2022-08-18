#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    int SoCuoi = n % 10;
    for (int i = 1;; i++)
    {
        int so;
        if (n <= 0)
        {
            printf("%d ", so);
            break;
        }
        so = n % 10;
        n /= 10;
    }
    printf("%d", SoCuoi);
    return 0;
}
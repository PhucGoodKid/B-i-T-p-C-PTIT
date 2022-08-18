#include <stdio.h>
#include <math.h>
int main()
{
    int a, tong = 1;
    scanf("%d", &a);
    for (int i = 1;; i++)
    {
        int n = a % 10;
        if (a == 0)
            break;
        tong *= n;

        a /= 10;
    }
    printf("%d", tong);
}

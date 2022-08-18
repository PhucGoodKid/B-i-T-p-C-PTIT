#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    int dem = 1;
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++)
    {
        n /= 10;
        if (n > 0)
        {
            dem++;
        }
        else
        {
            break;
        }
    }
    printf("%d", dem);
}

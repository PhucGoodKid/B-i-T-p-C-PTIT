#include <stdio.h>
#include <math.h>
int main()
{
    long long a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);
    long long delta = b * b - 4 * a * c;
    if (a == 0)
    {
        printf("NO ");
        return 0;
    }
    if (delta < 0)
    {
        printf("NO ");
    }
    else
    {
        if (delta == 0)
        {
            float x = (float)-b / 2 * a;
            printf("%.2f", x);
        }
        else
        {
            float x1 = (float)(-b + sqrt(delta)) / (2 * a);
            float x2 = (float)(-b - sqrt(delta)) / (2 * a);
            printf("%.2f %.2f", x1, x2);
        }
    }
}

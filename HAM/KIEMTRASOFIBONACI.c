#include <stdio.h>
#include <math.h>
int checkFibo(int n)
{
    int a = 5 * n * n + 4, b = 5 * n * n - 4;
    float A = sqrt(a), B = sqrt(b);
    if ((A == (int)A) || (B == (int)B))
        return 1;
    return 0;
}
int main()
{
    int n;
    scanf("%d", &n);
    if (checkFibo(n))
        printf("1");
    else
        printf("0");
    return 0;
}
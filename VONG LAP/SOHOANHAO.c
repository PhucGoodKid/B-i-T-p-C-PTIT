#include <stdio.h>
int main()
{
    int a, sum = 0;
    scanf("%d", &a);
    for (int i = 1; i <= a - 1; i++)
    {
        if (a % i == 0)
        {
            sum += i;
        }
    }
    // printf("%d", sum);
    if (sum == a)
        printf("1");
    else
        printf("0\n");
}
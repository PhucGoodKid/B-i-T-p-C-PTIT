#include <stdio.h>
int tongcs(int n)
{
    int sum = 0;
    int a;
    while (n > 0)
    {
        a = n % 10;
        sum += a;
        n /= 10;
    }
    return sum;
}
int smith(int n)
{
    int i = 2;
    int sum2 = 0;
    while (n > 1)
    {
        if (n % i == 0)
        {
            if (tongcs(i) == 1)
            {

                sum2 += i;
            }
            else
                sum2 += tongcs(i);
            n /= i;
        }
        else
            i++;
    }
    return sum2;
}
int main()
{
    int n;
    scanf("%d", &n);
    //	if (n==1)	printf("YES");
    if (smith(n) == tongcs(n))
        printf("YES\n");
    else
        printf("NO\n");
}

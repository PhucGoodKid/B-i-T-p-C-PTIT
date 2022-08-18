#include <stdio.h>
void process(int n)
{
    int sum = 1;
    for (int i = 2; i <= n; i++)
    {
        int count = 0;
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                count++;
                n = n / i;
            }
            sum *= i;
        }
    }
    printf("%d ", sum);
    printf("\n");
}
int main()
{
    int t;
    scanf("%d", &t);
    for (int l = 1; l <= t; l++)
    {

        int n;
        scanf("%d", &n);

        process(n);
    }
}

#include <stdio.h>
#include <math.h>

int main()
{
    int n, odd = 0, even = 0;
    scanf("%d", &n);
    while (n != 0)
    {
        int num = n % 10;
        if (num % 2 == 0)
            even++;
        else
            odd++;
        n /= 10;
    }
    printf("%d %d", odd, even);
    return 0;
}

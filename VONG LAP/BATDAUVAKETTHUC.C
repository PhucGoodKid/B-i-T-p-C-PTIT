#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        int a;
        scanf("%d", &a);
        int last = a % 10;
        int first = a;
        for (int i = 0;; i++)
        {

            if (first / 10 != 0)
            {
                first /= 10;
            }
            else
                break;
        }
        // printf("%d %d", first, last);
        if (first == last)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
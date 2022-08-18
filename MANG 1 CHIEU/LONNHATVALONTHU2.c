#include <stdio.h>
#include <math.h>

int main()
{
    int n, i, arr[99];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    for (i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    int max2 = 2;
    for (i = 0; i < n; i++)
    {
        if (arr[i] > max2 && arr[i] < max)
        {
            max2 = arr[i];
        }
    }
    printf("%d %d", max, max2);
    return 0;
}

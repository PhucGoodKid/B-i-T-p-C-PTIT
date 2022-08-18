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
    int min = arr[0];
    for (i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    int min2 = 99;
    for (i = 0; i < n; i++)
    {
        if (arr[i] < min2 && arr[i] > min)
        {
            min2 = arr[i];
        }
    }
    printf("%d %d", min, min2);
    return 0;
}
#include <stdio.h>
void in(int n, int a[100])
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}
void swap(int *x, int *y)
{
    int tmp = *x;
    *x = *y;
    *y = tmp;
}
int minarr(int n, int a[100], int k)
{
    int min = a[k];
    for (int i = k; i < n; i++)
    {
        if (a[i] < a[k])
        {
            min = a[i];
        }
    }
    return min;
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    in(n, a);
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
                swap(&a[j], &a[min]);
        }
        printf("Buoc %d: ", i + 1);
        for (int i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }
        printf("\n");
    }
}
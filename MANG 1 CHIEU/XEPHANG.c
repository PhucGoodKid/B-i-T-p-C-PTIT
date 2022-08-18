#include <stdio.h>
#include <math.h>
int max(int m, int n)
{
    if (m > n)
        return m;
    return n;
}

void swap(int *x, int *y)
{
    int t = *x;
    *x = *y;
    *y = t;
}

int main()
{
    int n;
    scanf("%d", &n);
    int t[n], d[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &t[i], &d[i]);
    }
    // sort
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (t[i] > t[j])
            {
                swap(&t[i], &t[j]);
                swap(&d[i], &d[j]);
            }
        }
    }
    int time = 0;
    for (int i = 0; i < n; i++)
    {
        time = fmax(t[i], time) + d[i];
    }
    printf("%d\n", time);
}
#include <stdio.h>
#include <math.h>

int so_nguyen_to(int n)
{
    if (n < 2)
        return 0;
    int i;
    for (i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

void Nhap_Mang(int n, int a[101])
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, a[101];
        scanf("%d", &n);
        Nhap_Mang(n, a);
        for (int i = 0; i < n; i++)
        {
            if (so_nguyen_to(a[i]) == 1)
            {
                printf("%d ", a[i]);
            }
        }
        printf("\n");
    }

    return 0;
}
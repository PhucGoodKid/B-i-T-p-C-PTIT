#include <stdio.h>
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
        int max = a[0];
        for (int i = 1; i < n; i++)
        {
            if (a[i] > max)
            {
                max = a[i];
            }
        }
        printf("%d\n", max);
        for (int i = 0; i < n; i++)
        {
            if (max == a[i])
            {
                printf("%d ", i);
            }
        }
        printf("\n");
    }
}
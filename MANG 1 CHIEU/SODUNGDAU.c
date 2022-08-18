#include <stdio.h>

void Nhap_Mang(int n, int a[])
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
        int n;
        scanf("%d", &n);
        int a[n];
        Nhap_Mang(n, a);
        int dem = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[i] > a[j])
                {
                    dem++;
                }
            }
            if (dem == n - i - 1)
                printf("%d ", a[i]);
            dem = 0;
        }
        printf("\n");
        // printf("%d\n" , a[n]);
    }
}
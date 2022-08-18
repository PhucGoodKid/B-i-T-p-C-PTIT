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
        int dem = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != a[n - 1 - i])
            {
                dem++;
            }
        }
        if (dem == 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
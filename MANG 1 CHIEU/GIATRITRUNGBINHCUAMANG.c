#include <stdio.h>

void Nhap_Mang(int n, int a[101])
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}
void Xuat_Mang(int n, int a[101])
{
    for (int i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }
}

int main()
{
    int n, a[100];
    scanf("%d", &n);
    Nhap_Mang(n, a);
    long long s = 0;
    for (int i = 0; i < n; i++)
    {
        s += a[i];
    }

    double kq = (double)s / n;
    printf("%.3lf", kq);
    return 0;
}
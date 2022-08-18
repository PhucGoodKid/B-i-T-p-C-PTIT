#include <stdio.h>

void Nhap_Mang(int n, int a[101])
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}
void Xuat_Mang_Chan(int n, int a[101])
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            printf("%d ", a[i]);
        }
    }
}

void Xuat_Mang_LE(int n, int a[101])
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            printf("%d ", a[i]);
        }
    }
}

int main()
{
    int n, a[101];
    scanf("%d", &n);
    Nhap_Mang(n, a);
    Xuat_Mang_Chan(n, a);
    printf("\n");
    Xuat_Mang_LE(n, a);
    return 0;
}
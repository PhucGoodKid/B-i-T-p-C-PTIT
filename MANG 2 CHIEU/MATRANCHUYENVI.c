#include <stdio.h>
void Nhap_Mang(int n, int m, int a[10][10])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
}
void xu_ly()
{
}
void Xuat_Mang(int n, int m, int a[10][10])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
}
int main()
{
    int n, m, a[10][10];
    scanf("%d%d", &n, &m);
    Nhap_Mang(n, m, a);
    Xuat_Mang(n, m, a);
    return 0;
}
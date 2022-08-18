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
void Xuat_Mang(int n, int m, int a[10][10])
{
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int t;
    scanf("%d", &t);
    for (int q = 1; q <= t; q++)
    {

        int n, m, a[10][10];
        scanf("%d%d", &n, &m);
        Nhap_Mang(n, m, a);
        printf("Test %d: \n", q);
        Xuat_Mang(n, m, a);
    }
    return 0;
}
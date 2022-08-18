#include <stdio.h>
void Nhap_Mang(int n, int a[100])
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
    for (int i = 1; i <= t; i++)
    {
        int n, m, p;
        scanf("%d%d%d", &n, &m, &p);
        int a[100], b[100];
        Nhap_Mang(n, a);
        Nhap_Mang(m, b);
        printf("Test %d:\n", i);
        for (int i = 0; i < p; i++)
            printf("%d ", a[i]);
        for (int i = 0; i < m; i++)
            printf("%d ", b[i]);
        for (int i = p; i < n; i++)
            printf("%d ", a[i]);
        printf("\n");
    }
    return 0;
}
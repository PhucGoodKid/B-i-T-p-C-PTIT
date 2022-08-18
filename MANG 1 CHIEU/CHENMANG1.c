#include <stdio.h>
void Nhap_Mang(int n, int *a)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}
int main()
{
    int n1, n2;
    scanf("%d%d", &n1, &n2);
    int a[100], b[100];
    Nhap_Mang(n1, a);
    Nhap_Mang(n2, b);
    int k;
    scanf("%d", &k);
    for (int i = 0; i < k; i++)
    {
        printf("%d ", a[i]);
    }
    for (int i = 0; i < n2; i++)
    {
        printf("%d ", b[i]);
    }
    for (int i = k; i < n1; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
#include <stdio.h>
void Nhap_Mang(int n, int *a)
{
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
}
int main()
{
    int n, a[100], k;
    scanf("%d", &n);
    Nhap_Mang(n, a);
    scanf("%d", &k);
    for (int i = k; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    for (int i = 0; i < k; i++)
        printf("%d ", a[i]);
}
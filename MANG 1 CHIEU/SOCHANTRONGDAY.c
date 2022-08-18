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
        int a[101], n;
        scanf("%d", &n);
        Nhap_Mang(n, a);

        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0 && a[i] > 0)
            {
                printf("%d ", a[i]);
            }
        }
        printf("\n");
    }
    return 0;
}
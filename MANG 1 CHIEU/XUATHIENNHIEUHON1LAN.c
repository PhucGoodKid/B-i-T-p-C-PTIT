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
    int n, a[101], i, j, k;
    scanf("%d", &n);
    Nhap_Mang(n, a);
    int check = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 1; j + i < n; j++)
        {
            if (a[i] == a[i + j])
            {
                for (k = 0; k < i; k++)
                {
                    if (a[i] == a[k])
                    {
                        check++;
                    }
                }
                if (check == 0)
                {
                    printf("%d ", a[i]);
                }
                check = 0;
                break;
            }
        }
    }
    return 0;
}
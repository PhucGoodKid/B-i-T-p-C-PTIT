#include <stdio.h>
void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
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
        printf("%d ", a[i]);
    }
}

int main()
{
    // int t ;
    // scanf ("%d", &t);
    // while (t--){
    int n;
    scanf("%d", &n);
    int a[n];
    Nhap_Mang(n, a);
    int check = 0, step = 1;
    for (int i = 0; i < n; i++)
    {
        check = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(&a[j], &a[j + 1]);
                check = 1;
            }
        }
        if (check == 0)
            break;

        printf("Buoc %d: ", step++);
        for (int k = 0; k < n; k++)
        {
            printf("%d ", a[k]);
        }
        printf("\n");
    }
}
// }
// 3 2 5 7
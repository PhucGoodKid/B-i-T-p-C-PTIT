#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        int check = 0;
        for (int i = 0; i < n - 1; i++)
        {
            int dung = 0;
            for (int j = i + 1; j < n; j++)
            {
                if (a[i] == a[j])
                {
                    dung = 1;
                    check++;
                    printf("%d", a[i]);
                    break;
                }
            }
            if (dung)
                break;
        }
        if (check == 0)
            printf("NO");
        printf("\n");
    }
}
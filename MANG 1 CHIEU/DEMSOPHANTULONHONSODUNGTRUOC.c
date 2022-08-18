#include <stdio.h>
int n[100];
int main()
{
    int a;
    scanf("%d", &a);
    while (a--)
    {
        int b;
        do
        {
            scanf("%d", &b);
        } while (b < 2 || b > 50);
        for (int c = 1; c < b; c++)
        {

            scanf("%d", &n[c]);
        }
        int kt = 1;
        int dem = 1;
        for (int i = 1; i < b; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (n[i] < n[j])
                    kt = 0;
            }
            if (kt == 1)
                dem++;
            else
                kt = 1;
        }
        printf("%d\n", dem);
    }
}
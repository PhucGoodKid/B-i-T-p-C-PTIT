#include <stdio.h>
int main()
{
    int m, n;
    scanf("%d%d", &m, &n);
    int x[50][50];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &x[i][j]);
    int a, b;
    scanf("%d%d", &a, &b);
    int c = a < b ? a : b;
    int d = a + b - c;
    for (int i = 0; i < m; i++)
    {
        int tmp = i;
        if (i == c - 1)
            i = d - 1;
        else if (i == d - 1)
            i = c - 1;
        for (int j = 0; j < n; j++)
            printf("%d ", x[i][j]);
        i = tmp;
        printf("\n");
    }
}

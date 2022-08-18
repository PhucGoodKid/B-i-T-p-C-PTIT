#include <stdio.h>
// void swap (int *x, int *y) {
// 	int tmp = *x;
// 	*x = *y;
// 	*y = tmp;
// }
int main()
{
    int m, n, arr[10][10], a, b;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &arr[i][j]);
    scanf("%d%d", &a, &b);

    for (int i = 0; i < n; i++)
    {
        int tmp = arr[i][a - 1];
        arr[i][a - 1] = arr[i][b - 1];
        arr[i][b - 1] = tmp;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
}
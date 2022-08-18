#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    int demA = 0, demB = 0;
    int ta = a, tb = b;

    for (int i = 1; ta > 0; i++)
    {
        int so_cuoiA = ta % 10;
        demA += so_cuoiA;
        ta /= 10;
    }
    for (int i = 1; tb > 0; i++)
    {
        int so_cuoiB = tb % 10;
        demB += so_cuoiB;
        tb /= 10;
    }
    if (demA > demB)
        printf("%d %d", b, a);
    else
        printf("%d %d", a, b);
}

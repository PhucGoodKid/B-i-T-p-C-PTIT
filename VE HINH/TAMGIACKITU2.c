#include <stdio.h>
int main()
{
    int h;
    scanf("%d", &h);
    int p = -2;
    for (int i = 1; i <= h; i++)
    {
        for (int j = 1; j <= h - i + 1; j++)
        {
            printf("%c", i + 2 * j + p + 64);
        }
        p++;
        printf("\n");
    }
    return 0;
}
#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    if (b == 0)
        printf("Vo so nghiem\n");
    else if (a == 0)
        printf("Vo nghiem\n");
    else
        printf("%.2f", (float)-b / a);
}
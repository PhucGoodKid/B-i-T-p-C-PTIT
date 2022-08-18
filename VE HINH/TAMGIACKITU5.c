#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    // int step = n - 1;
    for (int i = n; i >= 1; i--)
    {
        int l = i - 1;
        for (int j = 1; j <= i; j++)
        {
            if (i == 1)
                printf("@");
            else
                printf("%c", 64 + l);
            l++;
            // printf("%c", 64+step-j+i);
        }

        printf("\n");
    }
}
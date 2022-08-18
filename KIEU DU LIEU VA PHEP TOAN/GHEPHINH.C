#include <stdio.h>
#include <math.h>

int check(int n)
{
    int chv = sqrt(n);
    if (chv * chv == n)
        return chv;
    return 0;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a1, b1, a2, b2, a3, b3;
    scanf("%d %d %d %d %d %d", &a1, &b1, &a2, &b2, &a3, &b3);
    int dt = a1 * b1 + a2 * b2 + a3 * b3;
    int canh = check(dt);
    if (canh == 0)
        printf("NO\n");
    else
    {
        if (a1 > b1)
            swap(&a1, &b1);
        if (a2 > b2)
            swap(&a2, &b2);
        if (a3 > b3)
            swap(&a3, &b3);
        if (b1 == b2 || b2 == b3 || b3 == canh)
            printf("YES\n");
        else
        {
            if (b2 > b1)
            {
                swap(&a1, &a2);
                swap(&b1, &b2);
            }
            if (b3 > b1)
            {
                swap(&a1, &a3);
                swap(&b1, &b3);
            }
            if (b1 == canh)
            {
                if (a2 + a3 == canh || b2 + b3 == canh || a2 + b3 == canh || a3 + b2 == canh)
                    printf("YES\n");
                else
                    printf("NO\n");
            }
            else
                printf("NO\n");
        }
    }
    return 0;
}

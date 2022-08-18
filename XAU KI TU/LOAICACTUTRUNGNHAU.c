#include <stdio.h>
#include <string.h>
int main(void)
{
    char a[101], b[101][101];
    int i, j, n = 0;
    scanf("\n%[^\n]s", a);
    char *token = strtok(a, " ");
    while (token != NULL)
    {
        strcpy(b[n], token);
        n++;
        token = strtok(NULL, " ");
    }
    int c[n];
    for (i = 0; i < n; i++)
        c[i] = 1;
    for (i = 0; i < (n - 1); i++)
    {
        for (j = (i + 1); j < n; j++)
        {
            if (strcmp(b[j], b[i]) == 0)
                c[j] = 0;
        }
    }
    for (i = 0; i < n; i++)
    {
        if (c[i])
            printf("%s ", b[i]);
    }
    printf("\n");
    return 0;
}
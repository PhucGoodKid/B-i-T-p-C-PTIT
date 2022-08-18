#include <stdio.h>
#include <string.h>
int main()
{
    char s[105];
    char a[105][105];
    gets(s);
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] - 'A' + 'a';
    }
    char x[2] = " ";
    int len = 0;
    char *token;
    token = strtok(s, x);
    while (token != NULL)
    {
        strcpy(a[len], token);
        len++;
        token = strtok(NULL, x);
    }
    for (int i = 0; i < len; i++)
    {
        if (i != len - 1)
        {
            printf("%c", a[i][0]);
        }
        else
        {
            for (int j = 0; j < strlen(a[i]); j++)
            {
                printf("%c", a[i][j]);
            }
        }
    }
    printf("@ptit.edu.vn");
    return 0;
}
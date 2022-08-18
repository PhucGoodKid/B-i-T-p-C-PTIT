#include <stdio.h>
#include <string.h>
// tach cac tu trong xau 1, sau do check
// strcmp: so sanh 2 chuoi
int main()
{
    char s[100];
    gets(s);
    char a[100];
    scanf("%s", a);
    char *token = strtok(s, " ");
    while (token != NULL)
    {
        if (strcmp(token, a) != 0)
        {
            printf("%s ", token);
        }
        // printf("%s\n", token);
        token = strtok(NULL, " ");
    }
}
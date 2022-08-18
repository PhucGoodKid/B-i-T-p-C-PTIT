#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000];
    gets(s);
    int word = 0, number = 0, dig = 0;
    int n = strlen(s);
    for (int i = 0; i < n; i++)
    {
        if ((s[i] >= 65 && s[i] <= 90) || ((s[i] >= 97 && s[i] <= 122)))
        {
            word++;
        }
        else if (s[i] >= 48 && s[i] <= 57)
        {
            number++;
        }
        else
            dig++;
    }
    printf("%d %d %d", word, number, dig);
}
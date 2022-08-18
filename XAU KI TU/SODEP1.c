#include <stdio.h>
#include <string.h>
int kt(char a[])
{
    int d = 0, c = strlen(a) - 1;
    while (d < c)
    {
        int x = a[d] - '0';
        if (x % 2 == 1)
            return 0;
        if (a[d] != a[c])
            return 0;
        d++;
        c--;
    }
    return 1;
}
main()
{
    int t;
    char s[505];
    scanf("%d", &t);
    while (t--)
    {
        scanf("%s", &s);
        if (kt(s))
            printf("YES\n");
        else
            printf("NO\n");
    }
}

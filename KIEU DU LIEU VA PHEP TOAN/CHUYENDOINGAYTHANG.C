#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int tuan = (n % 365) / 7;
    int ngaydu = (n % 365) % 7;

    // int ngaydu =n-(n%365);
    printf("%d %d %d", (int)n / 365, tuan, ngaydu);
    return 0;
}
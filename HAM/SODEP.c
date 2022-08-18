#include <stdio.h>
#include <math.h>

// int tachso(long long n){
//	int i;
//	int temp;
//	for (i=1;;i++){
//		if (n==0){
//			return n;
//		}
//		temp=
//	}
// }
int sothuannghich(long long n)
{
    long long dao = 0, m = n = n / 10, sochu = 0, x;
    while (m > 9)
    {
        dao = dao * 10 + m % 10;
        m /= 10;
        sochu++;
    }
    x = pow(10, sochu);
    if (dao == n % x)
        return 1;
    else
        return 0;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long n;
        scanf("%lld", &n);
        long long so_cuoi = n % 10;
        long long sodau = n;
        while (sodau > 9)
            sodau /= 10;
        if (sodau * 2 == so_cuoi || sodau == 2 * so_cuoi && sothuannghich(n))
        {
            printf("YES\n");
        }
        else
            printf("NO\n");
    }
    return 0;
}

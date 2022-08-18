#include <stdio.h>
int main (){
	int a, b;
	scanf ("%d%d", &a, &b);
	if(b==0)	printf("0");
	else
	{printf ("%d %d %d ", a+b, a-b, a*b);
		printf ("%.2f %d ", (float) a/b, a%b);}
	return 0;
}

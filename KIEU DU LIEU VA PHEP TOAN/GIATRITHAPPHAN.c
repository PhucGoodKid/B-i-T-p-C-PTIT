#include <stdio.h>
int main (){
	int n;
	double a[100000];
	scanf ("%d", &n);
	int i;
	for (i=0;i<n;i++){
		scanf ("%lf", &a[i]);
	}
	
	for (i=0;i<n;i++){
		printf ("%.15lf\n", (double) 1/a[i]);
	}
	return 0;
}

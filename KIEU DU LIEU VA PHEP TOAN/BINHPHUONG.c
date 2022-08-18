#include <stdio.h>
int main (){
	int n, a[100];
	scanf ("%d", &n);
	int i;
	for (i=0;i<n;i++){
		scanf ("%d", &a[i]);
	}
	
	for (i=0;i<n;i++){
		printf ("%lld\n", (long long )a[i]*a[i] );
	}
	return 0;
}

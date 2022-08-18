#include <stdio.h>
#include <math.h>

int main (){
	int n;
	scanf ("%d", &n);
	while(n--){
		int a;
		int tong=0;
		scanf("%d", &a);
		for (int i=1;;i++){
			int n=a%10;
			tong+=n;
			if (a==0)	break;
			a/=10;
		}
		printf("%d\n", tong);
	};	
	return 0;
}
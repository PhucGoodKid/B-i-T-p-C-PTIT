#include <stdio.h>
#include <math.h>


int main () {
	int m, n;
	scanf ("%d%d", &m, &n);
	int first = sqrt(m);
	if (first*first==m)	first = first;
	else first=first+1;
	int last = sqrt(n);
	printf("%d\n", last - first + 1);
	for (int a = first; a <= last; a++) {

		printf("%d\n", a * a);
	}
	return 0;
}

#include <stdio.h>
main () {
	int a, b=0, n;
	scanf ("%d", &n);
	for ( a=1; a<=n; a++ ) {
		printf ("%d ", a);
		b += a;
	}
	printf ("\n%d������ ���� �� : %d", n, b); 
}

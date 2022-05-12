#include <stdio.h>
int even(int k);
main ( ) {
	int a, sum=0, n;
	scanf ("%d", &n);
	for ( a=1; a<=n; a++ )
	sum = sum + even(a);
	printf ("%d", sum);
} 
int even(int k) {
	if ( k%2==0 )
	return k;
	else
	return 0;
}

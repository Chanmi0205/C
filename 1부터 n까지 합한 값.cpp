#include <stdio.h>
void sum(int n);
main (void) {
	int i;
	for ( i=10; i<=50; i+=10 ) 
	sum(i);
}
void sum(int n) {
	int i, s=0;
	for ( i=1; i<=n; i++ ) 
	s += i;
	printf ("sum(%d) = %d\n", n, s);
}

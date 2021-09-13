#include <stdio.h>
factorial(int n) {
	if ( n <=1 ) 
	return 1;
	else
	return n * factorial(n-1); // 5 * fac(4) -> (fac(4)) 4 * fac(3) -> 3 * fac(2) -> 2 * fac(1) -> 1
}
main ( ) {
	printf ("%d", factorial(5));
}

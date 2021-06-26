#include <stdio.h>
main ( ) {
	int a=1, b;
	scanf ("%d", &b);
	while (a<=b) {
		if ( a%3==0 ) 
		printf ("%5d", a);
		a++; 
	}
}

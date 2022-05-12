#include <stdio.h>
main ( ) {
	int a, b;
	for ( a=1; a<=5; a++ ) {
		for ( b=1; b<=5; b++ ) {
		if ( a==b || a+b==6 )
		printf ("*");
		else 
		printf (" ");	
	}
	printf("\n");
}
}

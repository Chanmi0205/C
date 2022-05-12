#include <stdio.h>
main ( ) {
	int a, b;
	for ( a=0; a<=4; a++ ) {
		for ( b=0; b<=4; b++ ) {
			if ( a+b==4 || a == b ) {
				printf ("*");
			} 
			else {
				printf (" ");
			}
		}
		printf("\n");
	}
}

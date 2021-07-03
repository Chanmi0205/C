#include <stdio.h>
main ( ) {
	int Number1, Number2;
	scanf ("%d", &Number2);
	for ( Number1=1; Number1<=Number2; Number1++ ) {
		if ( Number1%3==0 ) 
		continue;
		printf ("%3d", Number1);
	}
}

#include <stdio.h>
main ( ) {
	int su[7] = { 1, 1, 0, 0, 1, 0, 1 };
	int a, cnt=0, pa=0;
	for ( a=0; a<=6; a++ ) {
		if ( su[a] == 1 ) 
		cnt = cnt + 1; 
	} 
	if ( cnt%2==0 ) 
	pa = 1;
	printf ("%d \n", pa);
}

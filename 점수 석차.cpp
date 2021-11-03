#include <stdio.h>
main ( ) {
	int a, b;
	int nu[7] = { 97, 88, 74, 89, 69, 52, 63 };
	int rank[7] = { 1, 1, 1, 1, 1, 1, 1 };
	for ( a=0; a<7; a++ ) 
	    for ( b=0; b<7; b++ )
		    if ( nu[a] < nu[b] )
			rank[a] = rank[a] + 1;
			printf (" 번호 점수 석차\n");
		for ( a=0; a<7; a++ )
		printf ("%4d %5d %4d\n", a+1, nu[a], rank[a]);  
}

#include <stdio.h>
main ( ) {
	int n1, n2, tmp;
	printf ("n1 : ");
	scanf ("%d", &n1);
	printf ("n2 : ");
	scanf ("%d", &n2);
		tmp = n1;
		n1 = n2;
		n2 = tmp;
	printf ("n1 = %d, n2 = %d", n1, n2); 
}

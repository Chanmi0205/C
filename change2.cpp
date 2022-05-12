#include <stdio.h>
main ( ) {
	int nu, a;
	char h[] = { '0', '1' };
	scanf ("%d", &nu);
	while ( nu != 0 ) {
		a = nu % 2;
		printf ("%c", h[a]);
		nu = nu / 2;
	}
}

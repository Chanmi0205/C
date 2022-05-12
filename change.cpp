#include <stdio.h>
main ( ) {
	int num[100]={0, }, n, a=0, b;
	printf ("10Áø¼ö = ");
	scanf ("%d", &n);   // ÀÔ·Â°ª = 23
	while ( n > 0 ) {
		num[a] = n % 2;
		n = n / 2;
		a++;
	} 
	printf ("2Áø¼ö => ");
	for ( b=a-1; b>=0; b-- )
	printf ("%d", num[b]); 
}

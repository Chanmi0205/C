#include <stdio.h>
main ( ) {
	int a=7, b=5, c=3, d=2, e=10, f=20;
	
	a &= d;   // ������ ����� : a = a & d 
	printf ("%d \n", a); 
	
	b ^= d;  // ������ ����� : b = b ^ d
	printf ("%d \n", b); 
	
	c |= d;  // ������ ����� : c = c | d
	printf ("%d \n", c); 
	
	e <<= d; // ������ ����� : e = e << d
	printf ("%d \n", e);
	
	f >>= d; // ������ ����� : e = e >> d
	printf ("%d", f); 
	
}


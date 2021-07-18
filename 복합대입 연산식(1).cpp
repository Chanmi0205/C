#include <stdio.h>
main ( ) {
	int a=7, b=5, c=3, d=2, e=13;
	
	a += d;   // 동일한 연산식 : a = a + d 
	printf ("%d \n", a); 
	
	b *= d;  // 동일한 연산식 : b = b * d
	printf ("%d \n", b); 
	
	c -= d;  // 동일한 연산식 : c = c - d
	printf ("%d \n", c); 
	
	e /= d; // 동일한 연산식 : e = e / d
	printf ("%d \n", e);
	
}

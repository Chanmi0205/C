#include <stdio.h>
#include <stdlib.h>

int a, c, d, e;
char b, ch1 = '+', ch2 = '-', ch3 = '*', ch4 = '/';
	
main ( ) {

	printf ("(숫자 기호 숫자)형\n입력 : ");
	scanf ("%d %c %d", &a, &b, &c);
	
	if ( b == ch1 ) {
	d = a + c;
	printf ("결과값 : %d", d);
    } 
	
	else if ( b == ch2 ) {
	d = a - c;
	printf ("결과값 : %d", d); 
    }
    
	else if ( b == ch3 ) {
	d = a * c;
	printf ("결과값 : %d", d); 
    }
    
    
	else if ( b == ch4 ) {
	d = a / c;
	e = a % c;
	printf ("결과값  몫:%d, 나머지:%d", d, e); 
    }
   
	else {
	printf ("잘못된 입력값입니다.\n");
    }
    return 0;	
}

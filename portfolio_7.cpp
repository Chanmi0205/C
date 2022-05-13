#include <stdio.h>
main ( ) {
	int a, b=0;
	printf ("분 입력 : ");
	scanf ("%d", &a);
	b = a * 60;
	printf ("입력하신 %d분은 %d초입니다.", a, b); 
}

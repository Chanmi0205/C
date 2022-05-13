#include <stdio.h>
main ( ) {
	int a, b, c;
	printf ("초 입력 : ");
	scanf ("%d", &a);
	b = a / 60;
	c = a % 60;
	printf ("입력하신 %d초는 %d분, %d초 입니다", a, b, c);
}

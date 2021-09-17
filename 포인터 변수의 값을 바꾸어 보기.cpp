/* int x=70; int *y=&x라고 가정하였을 때 y를 출력하게 된다면 x의 메모리값이 출력되게 되지만
   *y를 출력하라고 하였을 때 y가 의미하는 값을 출력하라는 의미로 x값이 출력된다
   
   (x = *y, &x = y)                                                                            */ 

#include <stdio.h>

int main (void) {
	int i=10;
	int *p;
	p=&i;
	printf ("i = %d\n", i);
	*p = 20;
	printf ("i = %d\n", i);
	return 0;
}

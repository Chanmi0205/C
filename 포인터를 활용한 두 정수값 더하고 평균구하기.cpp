#include <stdio.h>
int main(void) {
	
	int a=10, b=15, tobal;
	double avg;
	int *pa, *pb;
	int *pt = &tobal;
	double *pg = &avg;
	 
	pa = &a;
	pb = &b;
	
	*pt = *pa + *pb;
	*pg = *pt / 2.0;
	
	printf ("�� ������ �� : %d, %d\n", *pa, *pb);
	printf ("�� ������ �� : %d\n", *pt);
	printf ("�� ������ ��� : %.1lf", *pg);
	
	return 0;
} 

#include <stdio.h>
#include <stdlib.h>

int a, c, d, e;
char b, ch1 = '+', ch2 = '-', ch3 = '*', ch4 = '/';
	
main ( ) {

	printf ("(���� ��ȣ ����)��\n�Է� : ");
	scanf ("%d %c %d", &a, &b, &c);
	
	if ( b == ch1 ) {
	d = a + c;
	printf ("����� : %d", d);
    } 
	
	else if ( b == ch2 ) {
	d = a - c;
	printf ("����� : %d", d); 
    }
    
	else if ( b == ch3 ) {
	d = a * c;
	printf ("����� : %d", d); 
    }
    
    
	else if ( b == ch4 ) {
	d = a / c;
	e = a % c;
	printf ("�����  ��:%d, ������:%d", d, e); 
    }
   
	else {
	printf ("�߸��� �Է°��Դϴ�.\n");
    }
    return 0;	
}

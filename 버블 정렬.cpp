#include <stdio.h>
main ( ) {
	int m, n, temp;
	int a[]= {8,3,5,1};
	for ( m=0; m<=2; m++ ) {
		for ( n=0; n<=2-m; n++ ) 
		if ( a[n] > a[n+1] ) {
			temp = a[n];
			a[n] = a[n+1];
			a[n+1] = temp; // ������ ��ȯ  
		}
		printf ("\n %d ȸ�� \n", m+1);
		for ( n=0; n<=3; n++ ) 
		printf ("%d ", a[n]);
 	}
}

/* ��������(Asc) : ���ڰ� ���� �ͺ��� / �������� (desc) : ���ڰ� ū �ͺ���*/  



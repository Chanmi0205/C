#include <stdio.h>
#include <stdlib.h>
 
int main ( ) {

int a, b=0, c=0, d;
	
	while(1) {
 	
	printf ("\n������ ���ðڽ��ϱ�? \n0.���� 1.���� 2.�� 3.������ : ");
	scanf ("%d", &a); 
 
	if ( a>=0 && a<3 ) {
	printf ("\n���� : %d ", a);
    d = rand() % 3;
	printf ("�κ� : %d", d);

}

	if ( a==0 ) {
		if ( d == 0 ) {
			printf("\n�����ϴ�.\n\n");
		}
		 else if ( d == 1 ) {
			printf ("\n�����ϴ�.\n\n");
			c++;
		}
		else {
	        printf ("\n�̰���ϴ�.\n\n");	
	        b++;
		}	 
    }
    
	else if ( a==1 ) {
	    	 if ( d == 0 ) {
	 	     	printf("\n�̰���ϴ�.\n\n");
	 	     	b++;
	     	}
	        else if ( d == 1 ) {
			    printf ("\n�����ϴ�.\n\n");
	     	}
	     	else {
	            printf ("\n�����ϴ�.\n\n");	
	            c++;
		}
    }
	
	else if ( a==2 ) {
	    	 if ( d == 0 ) {
	 	     	printf("\n�����ϴ�.\n\n");
	 	     	c++;
	     	}
	        else if ( d == 1 ) {
			    printf ("\n�̰���ϴ�.\n\n");
			    b++;
	     	}
	     	else {
	            printf ("\n�����ϴ�.\n\n");	
		}
    }
	
	else if ( a==3 ) {
		printf ("\a\n������ ����Ǿ����ϴ�.\n�¸� Ƚ�� | ���� : %d��, �κ� %d��", b, c);
		return 0;
	}	
	
	else {
    printf("�߸��� �Է°��Դϴ�.\n\n");	
}

}

}


#include <stdio.h>
#include <stdlib.h>
 
int main ( ) {

int a, b=0, c=0, d;
	

	printf ("무엇을 내시겠습니까? \n0.가위 1.바위 2.보 : ");
	scanf ("%d", &a); 
 
	if ( a>=0 && a<3 ) {
	printf ("\n유저 : %d ", a);
    d = rand() % 3;
	printf ("로봇 : %d", d);

}

	if ( a==0 ) {
		if ( d == 0 ) {
			printf("\n비겼습니다.");
		}
		 else if ( d == 1 ) {
			printf ("\n졌습니다.");
			c++;
		}
		else {
	        printf ("\n이겼습니다.");	
	        b++;
		}	 
    }
    
	else if ( a==1 ) {
	    	 if ( d == 0 ) {
	 	     	printf("\n이겼습니다.");
	 	     	b++;
	     	}
	        else if ( d == 1 ) {
			    printf ("\n비겼습니다.");
	     	}
	     	else {
	            printf ("\n졌습니다.");	
	            c++;
		}
    }
	
	else if ( a==2 ) {
	    	 if ( d == 0 ) {
	 	     	printf("\n졌습니다.");
	 	     	c++;
	     	}
	        else if ( d == 1 ) {
			    printf ("\n이겼습니다.");
			    b++;
	     	}
	     	else {
	            printf ("\n비겼습니다.");	
		}
    }
	
	else {
    printf("\n잘못된 입력값입니다.");	
}
return 0;

}

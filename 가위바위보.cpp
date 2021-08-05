#include <stdio.h>
#include <stdlib.h>
 
int main ( ) {

int a, b=0, c=0, d;
	
	while(1) {
 	
	printf ("\n무엇을 내시겠습니까? \n0.가위 1.바위 2.보 3.끝내기 : ");
	scanf ("%d", &a); 
 
	if ( a>=0 && a<3 ) {
	printf ("\n유저 : %d ", a);
    d = rand() % 3;
	printf ("로봇 : %d", d);

}

	if ( a==0 ) {
		if ( d == 0 ) {
			printf("\n비겼습니다.\n\n");
		}
		 else if ( d == 1 ) {
			printf ("\n졌습니다.\n\n");
			c++;
		}
		else {
	        printf ("\n이겼습니다.\n\n");	
	        b++;
		}	 
    }
    
	else if ( a==1 ) {
	    	 if ( d == 0 ) {
	 	     	printf("\n이겼습니다.\n\n");
	 	     	b++;
	     	}
	        else if ( d == 1 ) {
			    printf ("\n비겼습니다.\n\n");
	     	}
	     	else {
	            printf ("\n졌습니다.\n\n");	
	            c++;
		}
    }
	
	else if ( a==2 ) {
	    	 if ( d == 0 ) {
	 	     	printf("\n졌습니다.\n\n");
	 	     	c++;
	     	}
	        else if ( d == 1 ) {
			    printf ("\n이겼습니다.\n\n");
			    b++;
	     	}
	     	else {
	            printf ("\n비겼습니다.\n\n");	
		}
    }
	
	else if ( a==3 ) {
		printf ("\a\n게임이 종료되었습니다.\n승리 횟수 | 유저 : %d점, 로봇 %d점", b, c);
		return 0;
	}	
	
	else {
    printf("잘못된 입력값입니다.\n\n");	
}

}

}


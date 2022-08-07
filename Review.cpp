#include <stdio.h>
#include <stdlib.h>

main() {
	int random = 0; 
	int number;
	
	random = rand()%2+1; 	
	
	printf("무엇을 내시겠습니까?\n");
	printf("가위:0, 바위:1, 보:2");
	scanf("%d", &number);
	
	printf("컴퓨터: %d, 유저: %d", random, number); 
	
	switch(number) {
		case 0:
			switch(random) {
				case 0: printf("비겼습니다."); break;
				case 1: printf("졌습니다."); break;
				case 2: printf("이겼습니다."); break;
			}
		break; 
		case 1:
			switch(random) {
				case 0: printf("이겼습니다."); break;
				case 1: printf("비겼습니다."); break;
				case 2: printf("졌습니다."); break;
			}
		break;
		case 2:
			switch(random) {
				case 0: printf("졌습니다."); break;
				case 1: printf("이겼습니다."); break;
				case 2: printf("비겼습니다."); break;
			}
		break; 
	}
}

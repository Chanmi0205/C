#include <stdio.h>
#include <stdlib.h>

main() {
	int random = 0; 
	int number;
	
	random = rand()%2+1; 	
	
	printf("������ ���ðڽ��ϱ�?\n");
	printf("����:0, ����:1, ��:2");
	scanf("%d", &number);
	
	printf("��ǻ��: %d, ����: %d", random, number); 
	
	switch(number) {
		case 0:
			switch(random) {
				case 0: printf("�����ϴ�."); break;
				case 1: printf("�����ϴ�."); break;
				case 2: printf("�̰���ϴ�."); break;
			}
		break; 
		case 1:
			switch(random) {
				case 0: printf("�̰���ϴ�."); break;
				case 1: printf("�����ϴ�."); break;
				case 2: printf("�����ϴ�."); break;
			}
		break;
		case 2:
			switch(random) {
				case 0: printf("�����ϴ�."); break;
				case 1: printf("�̰���ϴ�."); break;
				case 2: printf("�����ϴ�."); break;
			}
		break; 
	}
}

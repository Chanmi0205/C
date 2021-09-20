#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
	int number;      //번호 
	char name[10];  //이름 
	double grade;  // 학점 
}; 

int main(void) {
	
	struct student s;
	
	printf ("학번을 입력하세요 : ");
	scanf("%d", &s.number);
	printf ("이름을 입력하세요 : ");
	scanf("%s", &s.name);
	printf ("학점을 입력하세요 : ");
	scanf ("%lf", &s.grade);
	
	printf("학번 : %d\n", s.number);
	printf("이름 : %s\n", s.name);
	printf("학점 : %.1f\n", s.grade);
	
	return 0;
	
}

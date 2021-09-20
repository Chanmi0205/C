/* 구조체 : 객체 지향 프로그래밍에서 말하는 클래스의 모체가 되는 것으로 
            여러 개의 자료형을 묶어서 새로운 자료형을 만들 수 있는 방법 
			
			배열이 여러 개의 같은 자료형들을 하나로 묶는 것이였다면
			구조체는 서로 다른 자료형들을 하나로 묶어서 한꺼번에 다루는 것이다  */
 
/* 형태 : struct number {
          int img;
		  float real;
	    };                  */

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
	s.number = 20150001;
    strcpy(s.name, "홍길동");
	s.grade = 4.5;
	printf("학번 : %d\n", s.number);
	printf("이름 : %s\n", s.name);
	printf("학점 : %.1f\n", s.grade);
	return 0;
	
}

/* ����ü : ��ü ���� ���α׷��ֿ��� ���ϴ� Ŭ������ ��ü�� �Ǵ� ������ 
            ���� ���� �ڷ����� ��� ���ο� �ڷ����� ���� �� �ִ� ��� 
			
			�迭�� ���� ���� ���� �ڷ������� �ϳ��� ���� ���̿��ٸ�
			����ü�� ���� �ٸ� �ڷ������� �ϳ��� ��� �Ѳ����� �ٷ�� ���̴�  */
 
/* ���� : struct number {
          int img;
		  float real;
	    };                  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
	int number;      //��ȣ 
	char name[10];  //�̸� 
	double grade;  // ���� 
}; 

int main(void) {
	
	struct student s;
	s.number = 20150001;
    strcpy(s.name, "ȫ�浿");
	s.grade = 4.5;
	printf("�й� : %d\n", s.number);
	printf("�̸� : %s\n", s.name);
	printf("���� : %.1f\n", s.grade);
	return 0;
	
}

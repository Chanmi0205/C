#include <stdio.h>
int main(void) {
	char input[1001];
	gets(input);
	int count = 0;
	// HELLO
	while ( input[count] != '\0') {
		count++;
	} 
	printf("�Է��� ���ڿ��� ���̴� %d�Դϴ�.", count);
	return 0;
}

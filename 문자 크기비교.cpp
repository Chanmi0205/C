#include <stdio.h>
#include <string.h>

// 두 문자를 비교하여 값을 출력한다
 
int main(void) {
	char inputOne[5] = "A";
	char inputTwo[5] = "B";
	printf ("문자열 비교 : %d\n", strcmp(inputOne, inputTwo));
	return 0;
}

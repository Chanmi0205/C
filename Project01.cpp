#include <stdio.h>	

// 아래 코드 작성 안할 시 오류 발생 
int sum(int x, int y);

main() {
	int num = sum(4, 5);
	printf("%d", num);
}

// 아래 코드를 main 위에 쓸 경우 int sum(int x, int y);를 작성하지 않아도 오류가 발생하지 않음.	
int sum(int x, int y) {
	return x+y;
}

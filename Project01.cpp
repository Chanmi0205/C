#include <stdio.h>	

// �Ʒ� �ڵ� �ۼ� ���� �� ���� �߻� 
int sum(int x, int y);

main() {
	int num = sum(4, 5);
	printf("%d", num);
}

// �Ʒ� �ڵ带 main ���� �� ��� int sum(int x, int y);�� �ۼ����� �ʾƵ� ������ �߻����� ����.	
int sum(int x, int y) {
	return x+y;
}

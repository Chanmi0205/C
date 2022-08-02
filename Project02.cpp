#include <stdio.h>

main() {
	
	int a = 5;
	double b = 3.14;
	bool c = true;
	char d = 'd';
	char str[] = "Hello Word";
	int Number[][6] = { {0, 2, 0, 3, 0, 4},
						{0, 5, 0, 2, 0, 5} };
	
	printf("%d\n", a);
	printf("%f\n", b);
	printf("%d\n", c);
	printf("%c\n", d);
	printf("%s\n", str);
	
	for(int i=0; i<2; i++) {
		for(int j=0; j<6; j++) {
			printf("%d", Number[i][j]);
		}
		printf(" ");
	}
}

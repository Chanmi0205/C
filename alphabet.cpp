#include <stdio.h>
int main (void) {
	char small, cap;
	
	scanf ("%c", &cap);
	
	if (( cap >= 'A' ) && ( cap <= 'Z' )) {
		small = cap + ( 'a' - 'A');
	}
	printf ("´ë¹®ÀÚ : %c %c", cap, '\n');
	printf ("¼Ò¹®ÀÚ : %c", small);
	
	return 0;
}

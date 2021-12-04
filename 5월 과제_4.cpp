#include <stdio.h>
main( ) {
int a, b;
char ch;
ch = '*';
for(a = 0; a <= 2; a++) {
    for(b = a; b <= 2; b++)
       printf("%c", ch);
    printf("\n");
 }
}

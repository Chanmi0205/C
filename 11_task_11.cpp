#include <stdio.h>
void add(int n);
main(){
int  i;
for(i = 10;  i >= 5;  i -= 5 )
add(i);
}

void add(int n) {
int i, s = 0;
for(i = 1;  i <= n;  i++ )
  s += i;
  printf("add(%d) = %d\n", n, s);
}

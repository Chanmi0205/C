#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL)); 
    int random = rand() % 100; 
    printf("%d ", random); 
return 0;
} 

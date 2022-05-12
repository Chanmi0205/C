#include <stdio.h>
main ( ) {
	int a, left=0, right=8, mid, num;
	int d[9] = {1, 3, 4, 6, 23, 45, 56, 78, 99}; 
	scanf ("%d", &num);
	while(1) {
		if ( right-left >= 0 ) {
			a++;
			mid=(left+right)/2;
			if (num == d[mid]) {
				printf ("%dšřÂ°żĄ ŔÖŔ˝\n", mid+1);
				printf ("%dšřźöÇŕ\n", a);
				break;
			}
			if ( num > d[mid] )
			left = mid+1;
			else
			right = mid-1;
		}
	}
}

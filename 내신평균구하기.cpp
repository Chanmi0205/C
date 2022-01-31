#include <stdio.h>

main( ) {

	int average[100] = {0, }; // 등급 
	int number[100] = {0, }; // 단위수 

	int a, b, c, d=0, e, f, g;


	printf("전체 과목 수를 입력하세요 : ");	
	scanf("%d", &a);
 
 	printf ("\n--등급과 단위수 입력하기--\n\n (등급, 단위수\n  등급, 단위수)로 입력하여 주세요. \n\n");
    for (b=0; b<a; b++ ) {
    	scanf("%d %d", &average[b], &number[b]); // 등급과 단위수 입력받기  
	} 
	
	printf("\n\n--입력하신 등급과 단위수--\n");	
	for (b=0; b<a; b++ ) {
    	printf("\n   등급 : %d 단위수 : %d", average[b], number[b]);  // 등급과 단위수 확인하기 
	} 
	
	printf("\n\n입력하신 정보가 맞다면 전체 단위수를 입력해주세요 : ");


	scanf("%d", &c); // 전체 단위수 입력받기  
	
	printf("\n전체 단위수 : %d", c); // 전체 단위수 확인하기  
	
	for ( b=0; b<a; b++ ) {  // {(등급*단위수)+(등급*단위수)+...} 
		d = d + ( average[b] * number[b]);
	}
	
//	printf("\n\n%d", d); // (등급*단위수) 확인 
	
	//  {(등급*단위수)+(등급*단위수)+...} / 전체 단위수 
  	
	e = d / c; //정수 
	
	/* c++에서는 나눌 때 소수점 아래로 출력하지 못하므로 
		나머지 값을 10배 곱한 다음 다시 정수로 나누어 소수점 아래로 출력하기  */
	f = d % c;  
	f *= 10;
	g = f / c; // 소수점 
	
	printf("\n\n내신 평균은 약 %d.%d등급 입니다.", e, g);
	
}

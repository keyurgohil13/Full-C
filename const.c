#include<stdio.h>
main(){
	
	const float pi = 3.14;
	int r ;
	
	float res;
//		res = pi*r*r;
	printf("Enter circle radius :- ");
	scanf("%d", &r);
	// pi*r*r
	
	res = pi*r*r;
	
	printf("Area of Circle... = %f", res);
	
}

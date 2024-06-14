#include<stdio.h>

float greet(int c){
	return  (c*1.8)+32;
}

main(){
	int c;
	
	printf("Enter the value of Celsius :- ");
	scanf("%d", &c);
	
	float f = greet(c);
	
	printf("\nConvert Celsius to Fahrenheit in degree = %.2f", f);
}
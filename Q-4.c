#include<stdio.h>

int greet(int l, int h){
	return l*h;
}

main(){
	int l,h;
	
	printf("Enter the length of Rectangle :- ");
	scanf("%d", &l);
	printf("Enter the hight of Rectangle :- ");
	scanf("%d", &h);
	
	int area = greet(l,h);
	
	printf("\nArea of Rectangle = %d", area);
}
#include<stdio.h>

 greet(int a, int b){
	a = a+b;
    b = a-b;
    a = a-b;
    printf("\nA is = %d \nB is = %d", a, b);
}

main(){
	int a,b;
	
	printf("Enter the value of A :- ");
	scanf("%d", &a);
	printf("Enter the value of B :- ");
	scanf("%d", &b);
	
    greet(a, b);
}
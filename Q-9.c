#include<stdio.h>

 greet(int no){
	if(no%2==0){
        printf("\nYou given number is Even");
    }else{
        printf("\nYou given number is Odd");
    }
}

main(){
	int no;
	
	printf("Enter the number :- ");
	scanf("%d", &no);
	
    greet(no);
}
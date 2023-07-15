#include<stdio.h>
//Program to check given number is divisible by 2 or not (using if else).
int main(){
	int x;
	printf("Enter a number: ");
	scanf("%d", &x);
	
	if(x % 2 == 0){
		printf("\nYes, it's divisible by 2.");
	} 
	else{
		printf("\nNo, it's not divisible by 2.");
	}
	return 0;
}
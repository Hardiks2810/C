#include<stdio.h>
//Program to check if a number is even or odd.
int main(){
	int x;
	printf("Enter a number: ");
	scanf("%d", &x);
	
	if(x % 2 == 0){
		printf("\nIt's an even number.");
	} 
	else{
		printf("\nIt's an odd number.");
	}
	return 0;
}
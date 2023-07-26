#include<stdio.h>
//Program to check if given year is leap year or not
int main(){
	
	int year;
	printf("Enter a year:\n");
	scanf("%d",&year);
	
	if(year%4==0)
	{
		printf("It is a leap year");
	}
	else
	{
		printf("It isn't a leap year");
	}
	return 0;
}
#include<stdio.h>
// Nested if
int main()
{	
	int marks;
	printf("Enter your marks: ");
	scanf("%d",&marks);
	
	if(marks>=0 && marks<=100)
	{
		if(marks>=0 && marks<=33)
		{
			printf("Fail");
		}
		 if(marks>=34 && marks<=50)
		{
			printf("Second class");
		}
		 if(marks>=51 && marks<=70)
		{
			printf("First class");
			
		}
		 if(marks>=71 && marks<=100)
		{
			printf("Distinction");
		}
	}
	else
	{
		printf("Invalid marks");
	}
	return 0;
}

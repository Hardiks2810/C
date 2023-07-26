#include<stdio.h>
//Program to find percentage, grade for given marks USING Switch case
int main()
{
	char name[20];
	int marks[5];
	int total=0;
	int Percentage=0;
	printf("Enter your name \n");
	scanf("%s",name);
	
	for(int i=0;i<5;i++)
	{
		printf("\nEnter your marks \n");
		scanf("%d",&marks[i]);
		total = total + marks[i];
		Percentage = total / 5;
	}
	printf("\nTotal is %d",total);
	
	printf("\nPercentage is %d",Percentage);

	switch(Percentage)
	{
		case 100:
		case 90:
			printf("\nYour Grade IS A++");
			break;
		case 80:
			printf("\nYour Grade IS A");
			break;
		case 70:
			printf("\nYour Grade IS B+");
			break;
			
		case 60:
			printf("\nYour Grade IS B");
			break;
			
		case 50:
			printf("\nYour Grade IS C");
			break;
			
		case 40:
			printf("\nYour Grade IS D");
			break;
			
		case 30:
			printf("\nYou Are Fail");
			break;
			
		case 20:
			printf("\nYou Are Fail");
			break;
			
		case 10:
			printf("\nYou Are Fail");
			break;
			
		default:
				printf("\nInvalid");
				break;
	}
	return 0;
}
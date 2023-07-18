#include<stdio.h>

/* 
 Do while loop
 Do while loop is an exit controlled loop
*/

int main()
{
	int i=1;
	
	do
	{
		printf("Do while loop %d \n",i);
		i++;
	}
	while(i<=10);
	return 0;
}
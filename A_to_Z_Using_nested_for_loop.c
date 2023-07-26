#include<stdio.h>
//Program to display A to Z USING nested for loop
int main()
{
	for (int i = 1; i < 27; i++) 
	{
  	
	    for (int j = 0; j < i; j++)
		{
            printf(" %c ", 'A' + j); 
        }
        printf("\n");
    }
	return 0;
}
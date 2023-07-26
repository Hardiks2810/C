#include<stdio.h>
//Program to display tables from 1 to 10
int main()
{
	int i,m;
	
	for(i=1;i<=10;i++)
	{		
		for(m=1;m<=10;m++)
		{
			
			int product = i * m;
            printf("%d x %d = %d\n", i, m, product);
            
		}
		 printf("\n");
	}
		 return 0;
}
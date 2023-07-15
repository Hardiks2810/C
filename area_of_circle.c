#include<stdio.h>
//Area of a circle
int main(){
	float radius;
	printf("Enter radius: ");
	scanf("%f", &radius);
	
	printf("The area of circle is %f", 3.14 * radius * radius);
	return 0;
}
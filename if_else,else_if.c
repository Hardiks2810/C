#include<stdio.h>
//if else, else if condition
int main(){
	int time=9;
	printf("Bhai kitne baje aa raha hai? \n");
	scanf("%d",&time);
	
	if(time<7){
		printf("Chal bethte hai.\n");
	}
	else if(time<8){
		printf("Thik hai chal jaldi aana.\n");
	}
	else{
		printf("Toh phir rehne de aaj bhai.\n");
	}
	return 0;
}
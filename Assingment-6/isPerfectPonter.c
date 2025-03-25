#include<stdio.h>

void main(){
	int num;
	
	printf("Enter a number:");
	scanf("%d",&num);
	isPerfect(&num);
}
void isPerfect(int* a){
	int sum=0;
	int i=1;
	while(i<*a){
		if(*a%i==0){
			sum = sum + i;
		}
		i++;
	}
	if(sum==*a)
	{
		printf("Number is perfect number");
	}else{
		printf("Number is not a perfect number");
	}
}

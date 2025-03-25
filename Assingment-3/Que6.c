#include<stdio.h>

void main(){
	int num;
	
	printf("Enter a number:");
	scanf("%d",&num);
	
	int sum=0;
	int i=1;
	while(i<num){
		if(num%i==0){
			sum = sum + i;
		}
		i++;
	}
	if(sum==num)
	{
		printf("Number is perfect number");
	}else{
		printf("Number is not a perfect number");
	}
}

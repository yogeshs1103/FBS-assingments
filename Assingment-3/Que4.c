#include<stdio.h>

void main(){
	int num;
	int prime = 1;
	printf("Enter a number :");
	scanf("%d",&num);
	
	int i = 2;
	while(i<num){
		if(num%i==0){
			prime=0;
			break;
		}
		i++;
	}
	if(prime==0){
		printf("Number is not prime");
	}else
		printf("Number is prime");
}

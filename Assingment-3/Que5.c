#include<stdio.h>

void main(){
	int num;
	int rem;
	printf("Enter a 3 digit number:");
	scanf("%d",&num);
	
	int temp = num;
	int sum=0;
	while(num>0){
		rem = num%10;
		sum = sum + rem*rem*rem;
		num = num/10;
	}
	printf("sum:%d",sum);
	if(sum==temp){
		printf("\nNumber is an Armstrong number");
	}else
		printf("\nNumber is not an Armstrong number");
}

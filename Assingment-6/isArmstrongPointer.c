#include<stdio.h>

void main(){
	int num;

	printf("Enter a 3 digit number:");
	scanf("%d",&num);
	isArmstrong(&num);
}
void isArmstrong(int* a){
	int rem;
	int num = *a;
	int temp = *a;
	int sum=0;
	while(num>0){
		rem = num%10;
		sum = sum + rem*rem*rem;
		num = num/10;
	}
//	printf("sum:%d",sum);
	if(sum==temp){
		printf("\nNumber is an Armstrong number");
	}else
		printf("\nNumber is not an Armstrong number");
}

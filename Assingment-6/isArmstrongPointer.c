#include<stdio.h>

void main(){
	int num;

	printf("Enter a 3 digit number:");
	scanf("%d",&num);
	isArmstrong(&num);
}
int count(int a){
	int num = a;
	int count=0;
	while(num>0){
		count++;
		num /= 10;
	}
	return count;
}
int power(int base, int exponent){
	int res = 1;
	int i;
	for(i=0;i<exponent;i++){
		res = res * base;
	}
	return res;
}
void isArmstrong(int* a){
	int rem;
	int num = *a;
	int n=count(num);
	int temp = *a;
	int sum=0;
	while(num>0){
		rem = num%10;
		sum = sum + power(rem,n) ;
		num = num/10;
	}
//	printf("sum:%d",sum);
	if(sum==temp){
		printf("\nNumber is an Armstrong number");
	}else
		printf("\nNumber is not an Armstrong number");
}


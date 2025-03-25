#include<stdio.h>

void main(){
	int num,sum;
	int rem1,rem2,rem3,q1;

	printf("Enter a 3 digit number:");
	scanf("%d",&num);
	
	rem1 = num % 10;
	q1 = num / 10;
	
	rem2 = q1 % 10;
	rem3 = q1 / 10;
	
	sum = rem1 + rem2 + rem3;
	printf("The sum of the each digit of the number is: %d",sum);	
}

#include<stdio.h>

void main(){
	int num;
	int reverse=0;
	printf("Enter a number:");
	scanf("%d",&num);
	int temp = num;
	int rem;
	while(num>0){
		rem = num%10;
		reverse = reverse*10 + rem;
		num /= 10;
	}
	if(reverse == temp){
		printf("Given number is palindrome");
	}else
		printf("Not a palindrome");
}

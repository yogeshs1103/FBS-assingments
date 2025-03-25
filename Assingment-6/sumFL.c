#include<stdio.h>

void main(){
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	sumFL(&num);
}
void sumFL(int* a){
	int num = *a;
	int temp = num;
	int last= num%10;
	while(temp>=10){
		temp = temp / 10;
	}
	int first= temp;
	int sum = first+last;
	printf("Sum is:%d",sum);
}

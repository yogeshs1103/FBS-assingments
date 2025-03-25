#include<stdio.h>

void main(){
	int range;
	printf("Enter a range:");
	scanf("%d",&range);
	rangeFibonacci(&range);
}
void rangeFibonacci(int* a){
	int sum;
	int range=*a;
	int num1=0,num2=1;
	int i;
	for(i=0;i<=range;i++){
		if(num1 == 0){
			sum = num1;
			printf("%d",sum);
		}
		sum = num1 + num2;
		num1=num2;
		num2=sum;
			
		printf("\n%d",sum);
		
	}
}

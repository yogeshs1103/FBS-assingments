#include<stdio.h>

void main(){
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	isStrong(&num);
}
void isStrong(int* a){
	int num=*a;
	int temp=*a;
	int rem;
	int fact;
	int i;
	int sum=0;
	while(num>0){
		rem = num%10;
		fact = 1;
		i = 1;
		
		while(i<=rem){
			fact = i*fact;
				i++;
		}
		//printf("%d\n",fact);
		sum = sum + fact;
		//printf("%d\n",sum);
		num = num/10;	
	}
	printf("\nsum:%d",sum);
	if(sum==temp){
		printf("\nGiven number is a strong number");
	}else{
		printf("\nNot a strong number");
	}
}

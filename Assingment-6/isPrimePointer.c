#include<stdio.h>
void isPrime(int*);
void main(){
	int num;
	printf("Enter a number :");
	scanf("%d",&num);
	int* ptr = &num;
	isPrime(ptr);
}

void isPrime(int* a){
//	printf("In Prime");
	int num = *a;
	int prime = 1;
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

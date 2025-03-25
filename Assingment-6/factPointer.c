#include<stdio.h>
void factorial(int*);
void main(){
	int no1;
	printf("Enter number");
	scanf("%d",&no1);
	factorial(&no1);
}
void factorial(int* a){
	int num,i,fact=1;
	num=*a;
	for(i=1;i<=*a;i++){
		fact = fact*i;
	}
	printf("Facotrial=%d",fact);
}

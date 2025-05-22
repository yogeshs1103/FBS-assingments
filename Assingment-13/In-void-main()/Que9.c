#include<stdio.h>
typedef struct Complex{
	int real;
	int imaginary;
}Complex;
void main(){
	Complex c1;
	
	printf("Enter the real number:");
	scanf("%d",&c1.real);
	
	printf("Enter the imaginary number:");
	scanf("%d",&c1.imaginary);
	
	printf("Real Number:%d Imaginary Number:%d",c1.real,c1.imaginary);
}

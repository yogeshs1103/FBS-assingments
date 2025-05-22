#include<stdio.h>
typedef struct Complex{
	int real;
	int imaginary;
}Complex;
void display(Complex c1){
	printf("Real Number:%d Imaginary Number:%d",c1.real,c1.imaginary);
}
Complex store(){
	Complex c1;
	
	printf("Enter the real number:");
	scanf("%d",&c1.real);
	
	printf("Enter the imaginary number:");
	scanf("%d",&c1.imaginary);
	
	return c1;
}
void main(){
	Complex c1=store();
	display(c1);
}

#include<stdio.h>
typedef struct Complex{
	int real;
	int imaginary;
}Complex;
void display(Complex* cArr,int size){
	int i;
	for(i=0;i<size;i++){
		printf("Real Number:%d Imaginary Number:%d\n",cArr[i].real,cArr[i].imaginary);
	}
}
void store(Complex* cArr,int size){
	
	int i;
	for(i=0;i<size;i++){
		printf("Enter the real number:");
		scanf("%d",&cArr[i].real);
	
		printf("Enter the imaginary number:");
		scanf("%d",&cArr[i].imaginary);
	}
	
}
void main(){
	int size;
	printf("Enter the size:");
	scanf("%d",&size);
	Complex cArr[size];
	store(cArr,size);
	display(cArr,size);
}

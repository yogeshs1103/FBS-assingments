#include<stdio.h>

void main(){
	float c,f;
	printf("Enter the celcius:");
	scanf("%f",&c);
	
	f = (c * 1.8) + 32;
	printf("The Temperature in fahrenheit is:%f f",f);
	}

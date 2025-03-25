#include<stdio.h>

void main(){
	float area,r;
	
	printf("Enter the radius of the circle:");
	scanf("%f",&r);
	area = 3.14*r*r;
	printf("Area of Circle is:%.2f",area);
}

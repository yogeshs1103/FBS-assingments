#include<stdio.h>

void main(){
	int age;
	char gender;
	printf("Enter Your gender M for male and F for female:");
	scanf("%c",&gender);
	
	printf("Enter the age to check marriage eligibility:");
	scanf("%d",&age);
	
	if(gender == 'M'||'m' && age>=21){
		
		printf("You are eligible to marry:");
	
	}else if(gender == 'F'||'f' && age>=18){
	
		printf("You are eligible to marry:");
	
	}else{
	
		printf("You are not eligible to marry:");
	}
}

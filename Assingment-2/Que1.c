#include<stdio.h>

void main(){
	float price,discountedPrice;
	
	printf("Enter the price:");
	scanf("%f",&price);
	
	if(price>=100 && price<500){
		printf("Congrats!! You will get a 5%% discount:");
		discountedPrice = price - (price*0.05);
		printf("\nPrice after discount is:%.2f",discountedPrice);
	}else if(price>=500 && price<1000){
		printf("Congrats!! You will get a 10%% discount:");
		discountedPrice = price - (price*0.1);
		printf("\nPrice after discount is:%.2f",discountedPrice);
	}else if(price>=1000 && price<2000){
		printf("Congrats!! You will get a 20%% discount:");
		discountedPrice = price - (price*0.2);
		printf("\nPrice after discount is:%f",discountedPrice);
	}else if(price>=2000){
		printf("Congrats!! You will get a 30%% discount:");
		discountedPrice = price - (price*0.3);
		printf("\nPrice after discount is:%f",discountedPrice);
	}
}

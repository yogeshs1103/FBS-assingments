#include<stdio.h>

void main(){
	int price;
	char str;
	printf("Enter the price:");
	scanf("%d",&price);
	
	printf("Are you a student type Yes or No:");
	scanf(" %c",&str);
	
	if(str == "Yes" || "yes"){
		if(price>500){
			int discountedPrice = price - (price*0.2);
			printf("Price after discount is:%d",discountedPrice);
		}else{
			int discountedPrice = price - (price*0.1);
			printf("Price after discount is:%d",discountedPrice);
		}
	}else if(str == "No" || "no"){
		if(price>600){
			int discountedPrice = price - (price*0.15);
			printf("Price after discount is:%d",discountedPrice);
		}else{
			printf("No discount is applied");
			printf("You have to pay the price:%d",price);
	}
 }
}

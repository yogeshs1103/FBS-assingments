#include<stdio.h>
 int price();
 int main()
 {
 	int result=price();
 	printf("%d",result);
 }
 int price()
 {
 	float price,discount,finalprice;
 	printf("enter any number:");
 	scanf("%f",&price);
 	if(price>=2000)
 	 discount=0.20;
 	 else
 	 if(price>=1000)
 	 discount=0.10;
 	 else
 	 if(price>=500)
 	 discount=0.05;
 	 else
 	 discount=0.00;
 	 finalprice=price-(price*discount);
 	 return finalprice;
 }

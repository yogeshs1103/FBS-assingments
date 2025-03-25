///PRICE OF ITEM DIFFERENT DISCOUNT

#include<stdio.h>
 void discount();
 int main()
 {
 	discount();
 }
 void discount()
 {
 	float price=600,discount,finalprice;
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
 	 printf("FINAL PRICE%f",finalprice);
 }

#include<stdio.h>
 void salary(float,int);
int main()
{
	float no1;
	int no2;
	printf("enter any number:");
	scanf("%f",&no1);
	printf("enter any  number:");
	scanf("%d",&no2);
	 salary(no1,no2);
}
  void salary(float a,int b)
{
	float price,discount,finalprice;
	int student;
	 price=a;
	 student=b;
	
	if(student==1)
	if(price>=1000)
	discount=0.20;
	else
	discount=0.10;
	
	
	else
	if(student==0)
	if(price>=600)
	discount=0.15;
	else
	discount=0.00;
	
	finalprice=price-(price*discount);
	printf("FINAL PRICE=%f",finalprice);
}

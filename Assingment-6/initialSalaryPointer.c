#include<stdio.h>

void main()
{
	int no1;
	printf("enter the number:");
	scanf("%d",&no1);
	 initialprice(&no1);
}
 void initialprice(int* c)
{
	int price,discount,gst;
	 price=*c;
	
	if(price>=2000)
	{
		discount=0.20;
		gst=1.15;
	}
	else
	if(price>=1500)
	{
		discount=0.15;
		gst=1.13;
	}
	else
	{
		discount=0.05;
		gst=1.05;
	}
	int a=price-(price*discount);
	int b=price*gst;
	int finals=a+b;
	printf("FINAL SALARY=%d",finals);
}

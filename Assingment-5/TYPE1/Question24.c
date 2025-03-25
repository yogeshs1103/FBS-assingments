#include<stdio.h>
 void gst();
int main()
{
	gst();
}
 void gst()
{
	int price,discount,gst;
	printf("enter any number:");
	scanf("%d",&price);
	
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

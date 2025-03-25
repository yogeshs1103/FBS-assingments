#include<stdio.h>
 int cal(float);
int main()
{
	float no1;
	printf("enter any number:");
	scanf("%f",&no1);
    float result=cal(no1);
    printf("%f",result);
}
   int cal(float r)
{
	float price,discount,gst;
	price=r;
	
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
	float a=price-(price*discount);
	float b=price*gst;
	float finals=a+b;
	return finals;
}

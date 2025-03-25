#include<stdio.h>
 int pri(float,int);
int main()
{
	float no1;
	int no2;
	printf("enter any number:");
	scanf("%f",&no1);
	
	printf("enter any number:");
	scanf("%d",&no2);
    float result=pri(no1,no2);
    printf("%f",result);
}
  int pri(float a,int b)
{
	float price,discount,finalp;
	int student;
	 price=a;
	 student=b;
	
	if(price>=1000)
	if(student==1)
	discount=0.20;
	else
	discount=0.15;
	
	else
	if(price>=600)
	if(student==0)
	discount=0.10;
	else
	discount=0.05;
	
	finalp=price-(price*discount);
	return finalp;
}

#include<stdio.h>
void calprice(float,int);
int main()
{
	
		float no1=2000;
	    int no2=1;
	    calprice(no1,no2);

}
void calprice(float no1,int no2)
{
	float price=no1,discount;
	float fprice;
	int student=no2;
	
	if(student==1)
	{
		if(price>=1000)
		discount=0.20;
		else
		discount=0.10;
	}
	else if(student==0)
	{
		if(price>=600)
		discount=0.15;
		else
		discount=0.00;
	}
	
	fprice = price - (price*discount);
	printf("Final price = %f",fprice);
}

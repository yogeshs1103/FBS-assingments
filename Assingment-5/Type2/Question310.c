#include<stdio.h>
int first();
int main()
{
	int result=first();
	printf("Sum of first and last digit=%d",result);
}
  int first()
{
	int num;
	printf("enter any number:");
	scanf("%d",&num);
	int ln;
	int fn=num%10;
	ln=num;
	
	while(ln>10)
	{
		ln=ln/10;
	}
	int sum=fn+ln;
	return sum;
}

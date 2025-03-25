#include<stdio.h>
 void factorial(int);
int main()
{
	int a;
	printf("enter any number:");
	scanf("%d",&a);
	factorial(a);
}
   void factorial(int no1)
{
	int n,i,fact=1;
	 n=no1;
	
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("FACTORIAL%d",fact);
}

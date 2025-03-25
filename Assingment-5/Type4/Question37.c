#include<stdio.h>
int factorial(int);
int main()
{
	int no1;
	printf("enter any number:");
	scanf("%d",&no1);
	int result=factorial(no1);
	printf("%d",result);
}
 int factorial(int a)
{
	int n,i,fact=1;
	 n=a;
	
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	return fact;
}

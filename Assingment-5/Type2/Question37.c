#include<stdio.h>
int factorial();
int main()
{
	int result=factorial();
	printf("%d",result);
}
 int factorial()
{
	int n,i,fact=1;
	printf("enter a number: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	return fact;
}

#include<stdio.h>
 void factorial();
int main()
{
	factorial();
}
 void factorial()
{
	int n,i,fact=1;
	printf("enter a number: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("FACTORIAL%d",fact);
}

#include<stdio.h>
 void fabonacci(int);
int main()
{
	int no1;
	printf("enter any number:");
	scanf("%d",&no1);
	fabonacci(no1);
}
 void fabonacci(int e)
{
	int n,i,a=0,b=1,c;
	n=e;
	for(i=1;i<=n;i++)
	{
		printf("%d\n",a);
		c=a+b;
		a=b;
		b=c;
	}
}

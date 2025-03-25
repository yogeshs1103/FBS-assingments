#include<stdio.h>
#include<conio.h>
void fabonacci();
int main()
{
	fabonacci();
}
void fabonacci()
{
	int n,i,a=0,b=1,c;
	printf("enter any number:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("%d\n",a);
		c=a+b;
		a=b;
		b=c;
	}
}

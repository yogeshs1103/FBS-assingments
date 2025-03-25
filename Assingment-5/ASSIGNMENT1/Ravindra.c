#include<stdio.h>
int main()
{
	int num,a,b,c,i;
	printf("enter any number:");
	scanf("%d%d%d",&num,&a,&b);
	
	for(i=1;i<=num;i++)
	{
		printf("%d",a);
		c=a+b;
		a=b;
		b=c;
	}
}

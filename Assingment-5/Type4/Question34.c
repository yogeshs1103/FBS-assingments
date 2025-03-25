#include<stdio.h>
int prime(int);
int main()
{
	int no1;
	printf("enter any number:");
	scanf("%d",&no1);
	int result=prime(no1);
	if(result==1)
	printf("NO IS PRIME");
	if(result==0)
	printf("NO IS NOT PRIME");
}
 int prime(int a)
{
	int n,i,count=0;
	n=a;S
	
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	if(count==2)
	return 1;
	else
	return 0;
}

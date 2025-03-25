#include<stdio.h>
 void prime();
int main()
{
	prime();
}
 void prime()
{
	int n,i,count=0;
	printf("enter a number: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	if(count==2)
	printf("NO IS PRIME");
	else
	printf("NO IS NOT PRIME");
}

#include<stdio.h>
 void perfect();
int main()
{
	perfect();
}
 void perfect()
{
	int n,i,sum=0;
	printf("enter a number: ");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
	}
	if(sum==n)
	printf("NO IS PERFECT");
	else
	printf("NO IS NOT PERFECT");
}

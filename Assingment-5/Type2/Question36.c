#include<stdio.h>
 int perfect();
int main()
{
	int result=perfect();
	if(result==1)
	printf("num is perfect");
	if(result==0)
	printf("num is not perfect");
}
   int perfect()
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
	return 1;
	else
	return 0;
}

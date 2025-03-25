#include<stdio.h>
 int prime();
int main()
{
	int result=prime();
	if(result==1)
	printf("num is prime");
	if (result==0)
	printf("num is not prime");
}
   int prime()
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
	return 1;
	else
	return 0;
}

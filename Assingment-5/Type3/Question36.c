#include<stdio.h>
void perfect(int);
int main()
{
	int a;
	printf("enter any number:");
	scanf("%d",&a);
	perfect(a);
}
 void perfect(int no1)
{
	int n,i,sum=0;
	n=no1;
	
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

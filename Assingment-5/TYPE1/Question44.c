#include<stdio.h>
void strongrange();
int main()
{
	strongrange();
}
void strongrange()
{
	int start=1,end=500,rem;
	int i,temp,sum,fact=1,j;
	
	for(i=start;i<=end;i++)
	{
		temp=i;
		sum=0;
		while(temp!=0)
		{
			rem=temp%10;
			fact=1;
			for(j=rem;j>=1;j--)
			{
				fact=fact*j;
				
			}
			sum=sum+fact;
			temp=temp/10;
		}
		if(i==sum)
		printf("%d\n",i);
	}
}

#include<stdio.h>
void armstrongrange();
int main()
{
	armstrongrange();
}
void armstrongrange()
{
	int start=1,end=500,rem;
	int i,temp,sum;
	
	for(i=start;i<=end;i++)
	{
		temp=i;
		sum=0;
		while(temp!=0)
		{
			rem=temp%10;
			temp=temp/10;
			sum=sum+(rem*rem*rem);
		}
		if(i==sum)
		printf("%d\n",i);
	}
}

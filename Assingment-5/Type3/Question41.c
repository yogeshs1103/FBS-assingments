#include<stdio.h>
 void armstrongrange(int,int);
int main()
{
	int no1,no2;
	printf("enter any number:");
	scanf("%d%d",&no1,&no2);
	armstrongrange(no1,no2);
}
  void armstrongrange(int a,int b)
{
	int start,end,rem;
	int i,temp,sum;
	  start=a,end=b;
	
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

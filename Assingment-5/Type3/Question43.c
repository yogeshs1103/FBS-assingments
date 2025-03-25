#include<stdio.h>
 void perfectrange(int,int);
 int main()
 {
 	int no1,no2;
 	printf("enter any number:");11	
 	scanf("%d%d",&no1,&no2);
 	perfectrange(no1,no2);
 }
  void perfectrange(int a,int b)
{
	int start=a,end=b;
	int sum=0,i;
	while(start<=end)
	{
		sum=0;
		for(i=1;i<start;i++)
		{
			if(start%i==0)
			{
				sum=sum+i;
			}
		}
		if(sum==start)
		{
			printf("%d\n",sum);
		}
		start++;
	}
}

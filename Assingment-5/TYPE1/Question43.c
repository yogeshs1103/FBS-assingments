#include<stdio.h>
 void perfectrange();
 int main()
 {
 	perfectrange();
 }
 void perfectrange()
{
	int start=1,end=500;
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

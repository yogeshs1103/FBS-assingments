#include<stdio.h>
 void sum();
int main()
{
	sum();
}
 void sum()
{
	int a=1,b=10,sum=0;
	while(a<=10)
	{
		sum=sum+a;
		printf("SUM OF NUMBER=%d\n",sum);
		a++;
	}
}

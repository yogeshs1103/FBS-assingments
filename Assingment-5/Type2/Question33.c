#include<stdio.h>
 int range();
int main()
{
	int result=range();
	printf("%d",result);
}
   int range()
{
	int a=1,b=10,sum=0;
	while(a<=10)
	{
		sum=sum+a;
		printf("SUM OF NUMBER=%d\n",sum);
		a++;
	}
	return sum;
}

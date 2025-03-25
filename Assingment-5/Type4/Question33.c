#include<stdio.h>
int cal(int);
int main()
{
	int no1;
	printf("enter any number:");
	scanf("%d",&no1);
    int result=cal(no1);
    printf("%d",result);
}
 int cal(int p)
{
	int a,sum=0;
	a=p;
	while(a<=10)
	{
		sum=sum+a;
		printf("SUM OF NUMBER=%d\n",sum);
		a++;
	}
	return sum;
}

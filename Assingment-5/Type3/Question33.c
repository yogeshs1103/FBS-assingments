#include<stdio.h>
 void add(int);
int main(){
	int no1;
	printf("enter any number:");
	scanf("%d",&no1);
	add(no1);
}
 void add(int c)
{
	int a,sum=0;
	a=c;
	while(a<=10)
	{
		sum=sum+a;
		printf("SUM OF NUMBER=%d\n",sum);
		a++;
	}
}

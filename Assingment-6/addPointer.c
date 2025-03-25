#include<stdio.h>

void main(){
	int no1;
	printf("enter any number:");
	scanf("%d",&no1);
	add(&no1);
}
 void add(int* c)
{
	int a,sum=0;
	a=*c;
	int i =0;
	while(i<=a)
	{
		sum=sum+i;
		i++;
	}
	printf("SUM OF NUMBER=%d\n",sum);
}

#include<stdio.h>
 void first(int);
int main(){
	int a;
	printf("enter any number:");
	scanf("%d",&a);
	first(a);
}
   void first(int no1)
{
	int num,first,last,sum;
	 num=no1;

	last=num%10;
	
	while(num>10)
	{
		num=num/10;
		first=num;
		sum=first+last;
	}
	printf("%d\n%d\n%d",first,last,sum);
}

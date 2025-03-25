#include<stdio.h>
 int armstrong(int);
int main()
{
	int no1;
	printf("enter any number:");
	scanf("%d",&no1);
	 int result=armstrong(no1);
	 if(result==1)
	 printf("NUM IS ARMSTRONG");
	 if(result==0)
	 printf("NUM IS NOT ARMSTRONG");
}
   int armstrong(int a)
{
	int num,rem,sum=0,temp;
	num=a;
	temp=num;
	
	while(num>0)
	{
	  rem=num%10;
	  sum=sum+(rem*rem*rem);
	  num=num/10;	
	}
	if(temp==sum)
	return 1;
	else
	return 0;
}

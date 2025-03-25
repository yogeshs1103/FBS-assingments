#include<stdio.h>
 void armstrong(int);
int main()
{
	int no1;
	printf("enter any number:");
	scanf("%d",&no1);
	armstrong(no1);
}
 void armstrong(int a)
{
  int n,r,sum=0;
  n=a;

   int temp=n;
   while(n>0)
   {
   	r=n%10;
   	sum=(r*r*r)+sum;
   	n=n/10;
   }
   if(temp==sum)
   printf("NO IS ARMSTRONG");
   else
   printf("NO IS NOT ARMSTRONG");
}

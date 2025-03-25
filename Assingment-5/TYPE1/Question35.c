#include<stdio.h>
void armstrong();
int main()
{
	armstrong();
}
 void armstrong()
{
  int n,r,sum=0;
   printf("ENTER A NUMBER:");
   scanf("%d",&n);
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

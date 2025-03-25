#include<stdio.h>
 int armstrong();
int main()
{
	int result=armstrong();
	if(result==1)
	printf("num is armstrong");
	if(result==0)
	printf("num is not armstrong");
	
}
 int armstrong()
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
   return 1;
   else
   return 0;
}

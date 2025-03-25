#include<stdio.h>
 int reverse();
 int main()
 {
 	int result=reverse();
 	printf("%d",result);
 }
  int reverse()
 {
 	int n,r;
 	printf("enter any number:");
 	scanf("%d",&n);
 	
 	while(n>0)
 	{
 		r=n%10;
 		printf("%d",r);
 		n=n/10;
 		
	 }
	 return r;
 }

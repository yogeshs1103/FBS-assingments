#include<stdio.h>
 void num();
 int main()
 {
 	num();
 }
 void num()
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
 }

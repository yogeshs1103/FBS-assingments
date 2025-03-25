#include<stdio.h>
 void reverse(int);
 int main(){
 	int no1;
 	printf("enter any number:");
 	scanf("%d",&no1);
 	reverse(no1);
 }
  void reverse(int a)
 {
 	int n,r;
 	n=a;
 	
 	while(n>0)
 	{
 		r=n%10;
 		printf("%d",r);
 		n=n/10;
 		
	 }
 }

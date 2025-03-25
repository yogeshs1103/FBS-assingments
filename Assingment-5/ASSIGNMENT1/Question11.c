#include<stdio.h>
 int num(int);
 int main()
 {
 	int no1;
 	printf("enter any number:");
 	scanf("%d",&no1);
 	int result=num(no1);
 	printf("%d",result);
 }
   int num(int a)
 {
 	int f,c;
 	c=a;
 	f=(c*5/9)+32;
 	return f;
 }

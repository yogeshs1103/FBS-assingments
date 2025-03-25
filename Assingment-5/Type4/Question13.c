#include<stdio.h>
 int digit(int);
 int main()
 {
 	int no1;
 	printf("enter any number:");
 	scanf("%d",&no1);
 	int result=digit(no1);
 	printf("\nSUM OF THREE DIGIT=%d",result);
 	
 }
   int digit(int r)
 {
 	int num;
 	num=r;
 	int a=num/100;
 	int q1=num%100;
 	int b=q1/10;
 	int c=q1%10;
 	int sum=a+b+c;
 	printf("%d%d%d",c,b,a);
 	 return sum;
 }

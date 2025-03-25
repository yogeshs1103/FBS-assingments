#include<stdio.h>
int digit();
 void main()
 {
 	int result=digit();
 	printf("%d",result);
 	digit();
 }
 int digit()
 {
 	int num=987;
 	int a=num/100;
 	int q1=num%100;
 	int b=q1/10;
 	int c=q1%10;
 	int sum=a+b+c;
 	return sum;
 }

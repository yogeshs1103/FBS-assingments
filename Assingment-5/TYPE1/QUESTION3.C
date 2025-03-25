#include<stdio.h>
 void digit();
 int main()
 {
 	digit();
 }
 void digit()
 {
 	int num=987;
 	int a=num/100;
 	int q1=num%100;
 	int b=q1/10;
 	int c=q1%10;
 	int sum=a+b+c;
 	printf("ADDITION OF 3 N0=%d",sum);
 	printf("\nREVERSE=%d%d%d",c,b,a);
 }

#include<stdio.h>
int temp();
 void main()
 {
 	int sum;
 	sum=temp();
 	printf("%d",sum);
 	temp();
 }
 int temp()
 {
 	int f,c;
 	c=20;
 	f=(c*0.5)+32;
 	return f;
 }

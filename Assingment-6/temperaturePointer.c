#include<stdio.h>

 int main()
 {
 	int no1;
 	printf("enter any number:");
 	scanf("%d",&no1);
 	temp(&no1);

 }
  void temp(int* no1)
 {
 	
 	int f,c;
 	c=*no1;
 	f=(c*9/5)+32;
 	printf("%d",f);
 }

#include<stdio.h>
 void evenodd(int);
 void main()
 {
 	int no1;
 	printf("enter any number:");
 	scanf("%d",&no1);
 	 evenodd(no1);
 }
  void evenodd(int no1)
 {
 	int num;
 	num=no1;
 	if(num%2==0)
 	printf("NUMBER IS EVEN");
	 else
	printf("\nNUMBER IS ODD");
 }

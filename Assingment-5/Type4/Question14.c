#include<stdio.h>
 int evenOdd(int);
 int main()
 {
 	int no1;
 	printf("enter any number:");
 	scanf("%d",&no1);
 	 int result=evenOdd(no1);
 	 if(result==1)
 	 printf("NO IS EVEN");
 	 if(result==0)
 	 printf("NO IS ODD");
 }
    int evenOdd(int a)
 {
 	int num;
 	num=a;
 	if(num%2==0)
 	 return 1;
 	 else
 	 return 0;
 }

#include<stdio.h>
 int table();
 int main()
 {
 	int result=table();
 	printf("%d",result);
 }
   int table()
 {
 	int num=17;
 	int i=1,sum;
 	while(i<=10)
 	{
 		sum=num*i;
 		i++;
	 }
	 return sum;
 }


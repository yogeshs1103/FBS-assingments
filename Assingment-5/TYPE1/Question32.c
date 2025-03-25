#include<stdio.h>
 void table();
 int main()
 {
 	table();
 }
 void table()
 {
 	int num=17;
 	int i=1,sum;
 	while(i<=10)
 	{
 		sum=num*i;
 		printf("%d\n",sum);
 		i++;
	 }
 }


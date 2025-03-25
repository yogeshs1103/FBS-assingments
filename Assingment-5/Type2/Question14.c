#include<stdio.h>
 int evenodd();
 int main()
 {
 	int result=evenodd();
 	if(result==1)
 	printf(" NUM IS EVEN");
 	else
 	printf("NUM IS ODD");
 }
 int evenodd()
 {
 	int num=15;
 	if(num%2==0)
 	 	return 1;
 	else
 		return 0;
 }

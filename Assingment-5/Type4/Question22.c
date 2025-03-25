#include<stdio.h>
 int greater(int,int,int);
 int main()
 {
 	int no1,no2,no3;
 	printf("enter any number:");
 	scanf("%d%d%d",&no1,&no2,&no3);
 	int result=greater(no1,no2,no3);
 	if(result=1)
 	printf("A IS GREATER");
 	if(result==0)
 	printf("C IS GREATER");
 	if(result==1)
 	printf("B IS GREATER");
 	if(result==0)
 	printf("C IS GREATER");
 }
    int greater(int p,int q,int r)
 {
 	int a,b,c;
 	a=p,b=q,c=r;
 	if(a>=b)
 	{
 		if(a>=c)
 		return 1;
 		else 
 		return 0;
	 }
	 else
	 {
	 	if(b>=c)
	 	return 1;
	 	else
	 	return 0;
	 }
 }

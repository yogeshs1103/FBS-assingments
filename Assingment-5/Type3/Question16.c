#include<stdio.h>
 void gender(int,int);
int main()
{
	int no1,no2;
	printf("enter the number:");
	scanf("%d%d",&no1,&no2);
	gender(no1,no2);
}
   void gender(int a,int b)
{
	int maleage;
	maleage=a;
	
	if(maleage>=20)
	printf("ELIGIBLE TO MARRY MALE\n");
	else
	printf("NOT ELIGIBLE TO MARRY MALE\n");
	
	
	int femaleage;
	 femaleage=b;
	
	if(femaleage>=18)
	printf("ELIGIBLE TO MARRY FEMALE\n");
	else
	printf("NOT ELIGIBLE TO MARRY FEMALE");
}

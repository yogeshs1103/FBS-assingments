#include<stdio.h>
 int gender(int,int);
 int main()
 {
 	int no1,no2;
 	printf("enter any number:");
 	scanf("%d%d",&no1,&no2);
 	 int result=gender(no1,no2);
 	 if(result==1)
 	 printf("ELIGIBLE TO MARRY MALE\n");
 	 if(result==0)
 	 printf("NOT ELIGIBLE TO MARRY MALE\n");
 	 if(result==1)
 	 printf("ELIGIBLE TO MARRY FEMALE\n");
 	 if(result==0)
 	 printf("NOT ELIGIBLE TO MARRY FEMALE ");
 	 
 }
   int gender(int a,int b)
 {
 	int maleage;
 	maleage=a;
 	if(maleage>21)
 	return 1;
 	else
 	return 0;
 	
	 int femaleage;
	 femaleage=b;
	 if(femaleage>18)
	 return 1;
	 else
	 return 0;
 }

#include<stdio.h>
 int salary(float);
 int main()
 {
 	float no1;
 	printf("enter any number:");
 	scanf("%f",&no1);
 	float result=salary(no1);
 	printf("%f",result);
 }
    int salary(float a)
 {
 	float basic,da,ta,hra;
 	basic=a; 
 if (basic <=5000)
 {
  da=basic*0.10;
  ta=basic*0.20;
  hra=basic*0.25;
}
else
{
	 da=basic*0.15;
	 ta=basic*0.25;
	 hra=basic*0.30;
}
   float totals=basic+da+ta+hra;
    return totals;
}

#include<stdio.h>
 
void main()
 {
 	float no1;
 	printf("enter any number:");
 	scanf("%f",&no1);
 	price(&no1);
 }
  void price(float* a)
 {
 	float basic,da,ta,hra;
 	basic=*a;
	  
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
   float totalsalary=basic+da+ta+hra;
  printf("BASIC SALARY=%f\n",basic);
  printf("DA=%f\n",da);
  printf("TA=%f\n",ta);
  printf("HRA=%f\n",hra);
  printf("TOTAL SALARY=%f",totalsalary);
}

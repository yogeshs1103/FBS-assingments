#include<stdio.h>
 int salary();
 int main()
 {
 	int result=salary();
 	printf("%d",result);
 	salary();
 }
  int salary()
 {
 	float basic,da,ta,hra;
 	basic=4500; 
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
    return totalsalary;
 }

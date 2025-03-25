#include<stdio.h>
void temp();
void digit();
void area();
void evenodd();
void salary();
void age();
int main()
{
	temp();
	digit();
	area();
	evenodd();
	salary();
	age();
}
 void temp()
{
	int f,c;
 	c=20;
 	f=(c*0.5)+32;
 	printf("%d",f);
}
void digit()
{
 	int num=987;
 	int a=num/100;
 	int q1=num%100;
 	int b=q1/10;
 	int d=q1%10;
 	int sum=a+b+d;
 	printf("\nADDITION OF 3 N0=%d",sum);
 	printf("\nREVERSE=%d%d%d",d,b,a);
}
void area()
{
 	 	
 	int l=10,w=20;
	int area=l*w;
	int perimeter=2*(l+w);
	printf("\nAREA OF RECTANGLE=%d",area);
	printf("\nPERIMETER OF RECTANGLE=%d",perimeter);
	int pi=10,dia=2;
	int circle=pi*dia;
	int perimeter1=2*(pi+dia);
	printf("\nAREA OF CIRCLE=%d",circle);
	printf("\nPERIMETER OF CIRCLR=%d",perimeter1);
}
void evenodd()
{
	int nu=14;
 	if(nu%2==0)
 		printf("\nNUMBER IS EVEN");
	 else
	 	printf("\nNUMBER IS ODD");
}
void salary()
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
  printf("\nBASIC SALARY=%f\n",basic);
  printf("DA=%f\n",da);
  printf("TA=%f\n",ta);
  printf("HRA=%f\n",hra);
  printf("TOTAL SALARY=%f",totalsalary);
}
 
 void age()
 {
 	int maleage=22;
 	if(maleage>21)
 	{
 		printf("\nMALE IS ELIGIBLE TO MARRY");
 }
 else 
 	printf("\nMALE IS NOT ELIGIBLE TO MARRY");
	 int femaleage=20;
	 if(femaleage>18)
	 printf("\nFEMALE IS ELIGIBLE TO MARRY");
	 else
	 printf("\nFEMALE IS NOT ELIGIBLE TO MARRY");
   }


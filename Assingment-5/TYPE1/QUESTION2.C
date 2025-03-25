#include<stdio.h>
void area();
int main()
{
	area();
}
 void area()
{
	int l=10,w=20;
	int area=l*w;
	int perimeter=2*(l+w);
	printf("AREA OF RECTANGLE=%d",area);
	printf("\nPERIMETER OF RECTANGLE=%d",perimeter);
	
	
	int pi=10,dia=2;
	int circle=pi*dia;
	int perimeter1=2*(pi+dia);
	printf("\nAREA OF CIRCLE=%d",circle);
	printf("\nPERIMETER OF CIRCLR=%d",perimeter1);
	
}

#include<stdio.h>
 int area(int,int);
int main()
{
	int no1,no2;
	printf("enter any number:");
	scanf("%d%d",&no1,&no2);
	int result=area(no1,no2);
	printf("\nsum%d",result);
}
   int area(int a,int b)
{
	int l,w;
	l=a,w=b;
	int rectangle=l*w;
	int perimeter=2*(l+w);
	printf("AREA OF RECTANGLE=%d",rectangle);
	printf("\nPERIMETER OF RECTANGLE=%d",perimeter);
	int sum=rectangle+perimeter;
	return sum;
	
}


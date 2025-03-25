#include<stdio.h>
int area();
void main()
{
	int result=area();
	printf("%d",result);
	area();
}
int area()
{
	int l=10,w=20;
	int area=l*w;
	int perimeter=2*(l+w);
   
   return perimeter;	
	
}

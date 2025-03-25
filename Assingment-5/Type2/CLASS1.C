#include<stdio.h>
int myfun();
int main()
{
	int x=myfun();
	printf("%d",x);
}
int myfun()
{
	int x=10,y=20;
	return y,x;
}

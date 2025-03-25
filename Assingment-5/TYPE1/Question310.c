#include<stdio.h>
void first();
int main()
{
	first();
}
 void first()
{
	int num=12345;
	int ln;
	int fn=num%10;
	ln=num;
	
	while(ln>10)
	{
		ln=ln/10;
	}
	int sum=fn+ln;
	printf("FIRST DIGIT%d+LAST DIGIT%d=%d",fn,ln,sum);
}

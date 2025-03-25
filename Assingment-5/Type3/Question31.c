#include<stdio.h>
void prnt(int);
int main()
{
	int no1;
	printf("enter any number:");
	scanf("%d",&no1);
	prnt(no1);
}
  void prnt(int a)
{
	int i;
	i=a;
	while(i<=10)
	{
		printf("%d\n",i);
		i++;
	}
	
}

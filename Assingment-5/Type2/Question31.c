#include<stdio.h>
int hi();
int main()
{
	int result=hi();
	printf("%d",result);
	
}
  int hi()
{
	int i=1;
	while(i<10)
	{
		printf("%d\n",i);
		i++;
	}
	return i;
	
}

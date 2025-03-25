#include<stdio.h>
 void prime(int);
int main(){
	int no1;
	printf("enter any number:");
	scanf("%d",&no1);
	prime(no1);
}
 void prime(int a)
{
	int n,i,count=0;
	 n=a;
	
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	if(count==2)
	printf("NO IS PRIME");
	else
	printf("NO IS NOT PRIME");
}

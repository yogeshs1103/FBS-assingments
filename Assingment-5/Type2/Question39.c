#include<stdio.h>
int palindrome();
int main()
{
	int result=palindrome();
	if(result==1)
	printf("num is palindrome");
	if(result==0)
	printf("num is not palindrome");
}
  int palindrome()
{
  int n,r,sum=0;
  printf("enter a number:");
  scanf("%d",&n);
  int temp=n;
  while(n>0)
  {
  	r=n%10;
  	sum=r+(sum*10);
  	n=n/10;
  }
  if(temp==sum)
  return 1;
  else
  return 0;
}

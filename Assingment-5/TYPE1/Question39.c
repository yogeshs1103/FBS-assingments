#include<stdio.h>
void palindrome();
int main()
{
	palindrome();
}
 void palindrome()
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
  printf("no is polindrome");
  else
  printf("no is not polindrome");
  return 0;
}

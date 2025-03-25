#include<stdio.h>
int palindrome(int);
int main()
{
	int no1;
	printf("enter any number:");
	scanf("%d",&no1);
	int result=palindrome(no1);
	if(result==1)
	printf("NO IS PALINDROME");
	if(result==0)
	printf("NO IS NOT PALINDROME");
}
 int palindrome(int a)
{
  int n,r,sum=0;
  n=a;

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

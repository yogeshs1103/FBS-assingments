#include<stdio.h>
 void palindrome(int);
int main(){
	int a;
	printf("enter any number:");
	scanf("%d",&a);
	palindrome(a);
}
 void palindrome(int no1)
{
  int n,r,sum=0;
  n=no1;
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
}

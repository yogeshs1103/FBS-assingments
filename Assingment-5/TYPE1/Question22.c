#include<stdio.h>
 void greater();
 int main(){
 	greater();
 }
  void greater()
 {
 	int a=70,b=60,c=90;
 	if(a>=b)
 	{
 		if(a>=c)
 		printf("a is greater=%d",a);
 		else 
 		printf("c is greater=%d",c);
	 }
	 else
	 {
	 	if(b>=c)
	 	printf("b is greater=%d",b);
	 	else
	 	printf("c is greater=%d",c);
	 }
 }

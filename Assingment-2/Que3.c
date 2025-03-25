#include<stdio.h>

void main(){
	int a,b,c;
	char ops;
	
	printf("Enter the value of a And b:");
	scanf("%d%d",&a,&b);
	
	printf("Enter any of the operator from given:+,-,/,%,*:");
	scanf(" %c",&ops);
	
	if(ops=='+'){
		c = a+b;
		printf("The Answer is:%d\n",c);
	}else if(ops=='-'){
		c = a-b;
		printf("The Answer is:%d\n",c);
	}else if(ops=='*'){
		c = a*b;
		printf("The Answer is:%d\n",c);
	}else if(ops=='/'){
		if(b != 0){
				c = a/b;
		printf("The Answer is:%d\n",c);
		}else{
			printf("Can't perform division");
		}
	}else if(ops=='%'){
		c = a%b;
		printf("The Answer is:%d\n",c);
	}else{
		printf("Invalid Operator");
	}
}

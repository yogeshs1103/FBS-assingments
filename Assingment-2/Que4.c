#include<stdio.h>

void main(){
	int a;
	
	printf("Choose One : 1.Even-Odd 2.Basic Salary");
	scanf("%d",&a);
	
	if(a==1){
		int num;
	
	printf("Enter a number:");
	scanf("%d",&num);
	
		if(num % 2 == 0){
			printf("The number is Even");
		}else{
			printf("The number is odd");
		}
	}else if(a==2){
			int salary,da,ta,hra,total;
	
	printf("Enter the salary:");
	scanf("%d",&salary);
	
		if(salary<=5000){
			da = salary * 0.1;
			ta = salary * 0.2;
			hra =salary * 0.3;
			total = salary + da + ta + hra;
			printf("Total Salary after inclusion of various allowance is:%d",total);
			
		}else{
			 da = salary * 0.15;
			 ta = salary * 0.25;
			 hra = salary * 0.35;
			 total = salary + da + ta + hra;
			printf("Total Salary after inclusion of various allowance is:%d",total);
		}
		
	}else{
		printf("Invalid Choice");
	}
	
}

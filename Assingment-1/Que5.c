#include<stdio.h>{
	void main(){

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
}

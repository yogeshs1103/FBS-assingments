#include<stdio.h>
typedef struct Employee{
	int id;
	char name[20];
	long int sal;
	int allowance;
}E;
E store(){
	E e1;
	printf("Enter the Employee Id:");
	scanf("%d",&e1.id);
	
	printf("Enter the Employee name:");
	fflush(stdin);
	scanf("%s",e1.name);
	
	printf("Enter the Employee salary:");
	fflush(stdin);
	scanf("%ld",&e1.sal);	
	
	printf("Enter the Employee allwoance:");
	fflush(stdin);
	scanf("%d",&e1.allowance);
	
	return e1;
}
void display(E e1){
	
	printf("Employee id:%d\nEmployee Name:%s\nEmployee Salary:%ld\nEmployee Allowance:%d",e1.id,e1.name,e1.sal,e1.allowance);
	
}
void main(){
	E e1;
	e1=store();
	display(e1);
}

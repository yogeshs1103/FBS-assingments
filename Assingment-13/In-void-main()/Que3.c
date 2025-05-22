#include<stdio.h>
typedef struct Admin{
	int id;
	char name[20];
	long int sal;
	int allowance;
}A;
void main(){
	A a1;
	printf("Enter the Admin Id:");
	scanf("%d",&a1.id);
	
	printf("Enter the Admin name:");
	fflush(stdin);
	scanf("%s",a1.name);
	
	printf("Enter the Admin salary:");
	fflush(stdin);
	scanf("%ld",&a1.sal);	
	
	printf("Enter the Admin allwoance:");
	fflush(stdin);
	scanf("%d",&a1.allowance);
	
	printf("Admin id:%d\nAdmin Name:%s\nAdmin Salary:%ld\nAdmin Allowance:%d",a1.id,a1.name,a1.sal,a1.allowance);
	
}

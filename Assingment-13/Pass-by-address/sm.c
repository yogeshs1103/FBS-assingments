#include<stdio.h>
typedef struct SalesManager{
	int id;
	char name[20];
	long int sal;
	int incentive;
	int target;
}SM;
void display(SM* a1){
	printf("Sales Manager id:%d\nSales Manager Name:%s\nSales Manager Salary:%ld\nSales Manager Incentive:%d\nSales Manager Target:%d",a1->id,a1->name,a1->sal,a1->incentive,a1->target);
}
SM* store(SM* a1){
	
	printf("Enter the Sales Manager Id:");
	scanf("%d",&a1->id);
	
	printf("Enter the Sales Manager name:");
	fflush(stdin);
	scanf("%s",a1->name);
	
	printf("Enter the Sales Manager salary:");
	fflush(stdin);
	scanf("%ld",&a1->sal);	
	
	printf("Enter the Sales Manager incentive:");
	fflush(stdin);
	scanf("%d",&a1->incentive);
	
	printf("Enter the Sales Manager target:");
	fflush(stdin);
	scanf("%d",&a1->target);
	
	return a1;
}
void main(){
	SM a1;
	SM* ptr=&a1;
	store(ptr);
	display(ptr);
}

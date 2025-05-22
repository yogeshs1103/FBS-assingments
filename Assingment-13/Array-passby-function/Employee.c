#include<stdio.h>
typedef struct Employee{
	int id;
	char name[20];
	long int sal;
	int allowance;
}E;
void store(E* eArr,int size){
	int i;
	for(i=0;i<size;i++){
		printf("Enter the Employee Id:");
		scanf("%d",&eArr[i].id);
	
		printf("Enter the Employee name:");
		fflush(stdin);
		scanf("%s",eArr[i].name);
	
		printf("Enter the Employee salary:");
		fflush(stdin);
		scanf("%ld",&eArr[i].sal);	
	
		printf("Enter the Employee allwoance:");
		fflush(stdin);
		scanf("%d",&eArr[i].allowance);
	}
	
}
void display(E* eArr,int size){
	
	int i;
	for(i=0;i<size;i++){
		printf("Employee id:%d\nEmployee Name:%s\nEmployee Salary:%ld\nEmployee Allowance:%d\n",eArr[i].id,eArr[i].name,eArr[i].sal,eArr[i].allowance);
	}
	
}
void main(){
	int size;
	printf("Enter the size:");
	scanf("%d",&size);
	E eArr[size];
	store(eArr,size);
	display(eArr,size);
}

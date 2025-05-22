#include<stdio.h>
typedef struct Admin{
	int id;
	char name[20];
	long int sal;
	int allowance;
}A;
void store(A* aArr,int size){
	int i;
	for(i=0;i<size;i++){
		printf("Enter the Admin Id:");
	scanf("%d",&aArr[i].id);
	
	printf("Enter the Admin name:");
	fflush(stdin);
	scanf("%s",aArr[i].name);
	
	printf("Enter the Admin salary:");
	fflush(stdin);
	scanf("%ld",&aArr[i].sal);	
	
	printf("Enter the Admin allwoance:");
	fflush(stdin);
	scanf("%d",&aArr[i].allowance);
	}
	
}
void display(A* aArr,int size){
	int i;
	for(i=0;i<size;i++){
		printf("Admin id:%d\nAdmin Name:%s\nAdmin Salary:%ld\nAdmin Allowance:%d\n",aArr[i].id,aArr[i].name,aArr[i].sal,aArr[i].allowance);
	}
}
void main(){
	int size;
	printf("Enter the size:");
	scanf("%d",&size);
	A aArr[size];
	store(aArr,size);
	display(aArr,size);
}

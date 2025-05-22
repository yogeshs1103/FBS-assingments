#include<stdio.h>
typedef struct SalesManager{
	int id;
	char name[20];
	long int sal;
	int incentive;
	int target;
}SM;
void display(SM* aArr,int size){
	int i;
	for(i=0;i<size;i++){
		printf("Sales Manager id:%d\nSales Manager Name:%s\nSales Manager Salary:%ld\nSales Manager Incentive:%d\nSales Manager Target:%d",aArr[i].id,aArr[i].name,aArr[i].sal,aArr[i].incentive,aArr[i].target);
	}
}
void store(SM* aArr,int size){
	
	int i;
	for(i=0;i<size;i++){
		printf("Enter the Sales Manager Id:");
		scanf("%d",&aArr[i].id);
	
		printf("Enter the Sales Manager name:");
		fflush(stdin);
		scanf("%s",aArr[i].name);
	
		printf("Enter the Sales Manager salary:");
		fflush(stdin);
		scanf("%ld",&aArr[i].sal);	
	
		printf("Enter the Sales Manager incentive:");
		fflush(stdin);
		scanf("%d",&aArr[i].incentive);
	
		printf("Enter the Sales Manager target:");
		fflush(stdin);
		scanf("%d",&aArr[i].target);
	}
	
}
void main(){
	int size;
	printf("Enter the size:");
	scanf("%d",&size);
	SM aArr[size];
	store(aArr,size);
	display(aArr,size);
}

#include<stdio.h>
typedef struct HR{
	int id;
	char name[20];
	long int sal;
	int comission;
}HR;
void display(HR* aArr,int size){
	int i;
	for(i=0;i<size;i++){
		printf("HR id:%d\nHR Name:%s\nHR Salary:%ld\nHR Comission:%d\n",aArr[i].id,aArr[i].name,aArr[i].sal,aArr[i].comission);
	}
}
void store(HR* aArr,int size){
	
	int i;
	for(i=0;i<size;i++){
		printf("Enter the HR Id:");
		scanf("%d",&aArr[i].id);
	
		printf("Enter the HR name:");
		fflush(stdin);
		scanf("%s",aArr[i].name);
	
		printf("Enter the HR salary:");
		fflush(stdin);
		scanf("%ld",&aArr[i].sal);	
	
		printf("Enter the HR comission:");
		fflush(stdin);
		scanf("%d",&aArr[i].comission);
	}
	
}
void main(){
	int size;
	printf("Enter the size:");
	scanf("%d",&size);
	HR aArr[size];
	store(aArr,size);
	display(aArr,size);
}

#include<stdio.h>
typedef struct Student{
	int rollNo;
	char name[20];
	float marks;
}S;
void store(S* sArr,int size){
	int i;
	for(i=0;i<size;i++){
		printf("Enter the roll number:");
		scanf("%d",&sArr[i].rollNo);
		
		printf("Enter the name:");
		fflush(stdin);
		scanf("%s",sArr[i].name);
		
		printf("Enter the marks:");
		fflush(stdin);
		scanf("%f",&sArr[i].marks);
	}
	
}
void display(S* sArr,int size){
	int i;
	for(i=0;i<size;i++){
		printf("Roll Number:%d\nName:%s\nMarks:%.2f\n",sArr[i].rollNo,sArr[i].name,sArr[i].marks);
	}
}
void main(){
		int size;
		printf("Enter the size:");
		scanf("%d",&size);
		S sArr[size];
		store(sArr,size);
		display(sArr,size);
}

#include<stdio.h>
typedef struct Date{
	int day;
	int month;
	int year;
}Date;
void display(Date* dArr,int size){
	int i;
	for(i=0;i<size;i++){
		printf("Day:%d/Month:%d/Year:%d\n",dArr[i].day,dArr[i].month,dArr[i].year);
	}
}
void store(Date* dArr,int size){
	
	int i;
	for(i=0;i<size;i++){
		printf("Enter the date:");
		scanf("%d",&dArr[i].day);
	
		printf("Enter the month:");
		scanf("%d",&dArr[i].month);
	
		printf("Enter the year:");
		scanf("%d",&dArr[i].year);
	}
	
}
void main(){
	int size;
	printf("Enter the size:");
	scanf("%d",&size);
	Date dArr[size];
	
	store(dArr,size);
	display(dArr,size);
}

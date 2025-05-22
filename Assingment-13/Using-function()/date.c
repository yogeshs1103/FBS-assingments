#include<stdio.h>
typedef struct Date{
	int day;
	int month;
	int year;
}Date;
void display(Date d1){
	printf("Day:%d/Month:%d/Year:%d:",d1.day,d1.month,d1.year);
}
Date store(){
	Date d1;
	printf("Enter the date:");
	scanf("%d",&d1.day);
	
	printf("Enter the month:");
	scanf("%d",&d1.month);
	
	printf("Enter the year:");
	scanf("%d",&d1.year);
	
	return d1;
}
void main(){
	Date d1;
	d1=store();
	display(d1);
}

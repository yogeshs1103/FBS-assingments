#include<stdio.h>
typedef struct Time{
	int hour;
	int min;
	int sec;
}Time;
void display(Time t1){
	printf("Hour:%d Minutes:%d Seconds:%d",t1.hour,t1.min,t1.sec);
}
Time store(){
	Time t1;
	printf("Enter the hour:");
	scanf("%d",&t1.hour);
	
	printf("Enter the mins:");
	scanf("%d",&t1.min);
	
	printf("Enter the sec:");
	scanf("%d",&t1.sec);
	
	return t1;
}
void main(){
	Time t1=store();
	display(t1);
}

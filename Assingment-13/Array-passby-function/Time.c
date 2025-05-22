#include<stdio.h>
typedef struct Time{
	int hour;
	int min;
	int sec;
}Time;
void display(Time* tArr,int size){
	int i;
	for(i=0;i<size;i++){
		printf("Hour:%d Minutes:%d Seconds:%d\n",tArr[i].hour,tArr[i].min,tArr[i].sec);
	}
}
void store(Time* tArr,int size){
	
	int i;
	for(i=0;i<size;i++){
		printf("Enter the hour:");
		scanf("%d",&tArr[i].hour);
		
		printf("Enter the mins:");
		scanf("%d",&tArr[i].min);
		
		printf("Enter the sec:");
		scanf("%d",&tArr[i].sec);
	}
	
}
void main(){
	int size;
	printf("Enter the size:");
	scanf("%d",&size);
	Time tArr[size];
	store(tArr,size);
	display(tArr,size);
}

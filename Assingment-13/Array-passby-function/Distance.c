#include<stdio.h>
typedef struct Distance{
	int feet;
	int inch;
}Distance;
void display(Distance* dArr,int size){
	int i;
	for(i=0;i<size;i++){
		printf("Feet:%d Inches:%d",dArr[i].feet,dArr[i].inch);
	}
}
void store(Distance* dArr,int size){

	int i;
	for(i=0;i<size;i++){
		printf("Enter the feet:");
		scanf("%d",&dArr[i].feet);
	
		printf("Enter the inches:");
		scanf("%d",&dArr[i].inch);
	}
	
}
void main(){
	int size;
	printf("Enter the size:");
	scanf("%d",&size);
	Distance dArr[size];
	store(dArr,size);
	display(dArr,size);
}

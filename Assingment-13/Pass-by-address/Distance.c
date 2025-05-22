#include<stdio.h>
typedef struct Distance{
	int feet;
	int inch;
}Distance;
void display(Distance* d1){
	printf("Feet:%d Inches:%d",d1->feet,d1->inch);
}
Distance* store(Distance* d1){

	printf("Enter the feet:");
	scanf("%d",&d1->feet);
	
	printf("Enter the inches:");
	scanf("%d",&d1->inch);
	
	return d1;
}
void main(){
	Distance d1;
	Distance* ptr=&d1;
	store(ptr);
	display(ptr);
}

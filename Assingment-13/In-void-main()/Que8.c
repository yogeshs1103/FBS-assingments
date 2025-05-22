#include<stdio.h>
typedef struct Distance{
	int feet;
	int inch;
}Distance;
void main(){
	Distance d1;
	printf("Enter the feet:");
	scanf("%d",&d1.feet);
	
	printf("Enter the inches:");
	scanf("%d",&d1.inch);
	
	printf("Feet:%d Inches:%d",d1.feet,d1.inch);
}

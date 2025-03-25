#include<stdio.h>

void main(){
	int start;
	int end;
	printf("Enter the start and end:");
	scanf("%d%d",&start,&end);
	int sum=0;
	
	while(start<=end){
	 sum = sum + start;
		start++;
	}
	printf("%d",sum);
}

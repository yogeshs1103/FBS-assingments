#include<stdio.h>

void main(){
	int num;
	printf("Enter the number:");
	scanf("%d",&num);
	int i=1;
	while(i<=10){
		int no = num * i;
		printf("%d\n",no);
		i++;
	}
}

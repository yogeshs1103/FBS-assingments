#include<stdio.h>

void main(){
	int range;
	
	printf("Enter a range:");
	scanf("%d",&range);
	rangePerfect(&range);
}

void rangePerfect(int* a){
	int range= *a;
	int i;
	for(i=2;i<=range;i++){
		int sum=0;
		int j=1;
		while(j<i){
			if(i%j==0){
				sum = sum + j;
			}
			j++;
		}
		if(sum==i)
		{
			printf("\n%d",i);
		}
	}
}

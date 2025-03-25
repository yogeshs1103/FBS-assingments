#include<stdio.h>

void main(){
	int range;
	
	printf("Enter the range :");
	scanf("%d",&range);
	rangePrime(&range);
}
void rangePrime(int* a){
	int range = *a;
	int prime;
	int i;
	for(i=2;i<=range;i++){
		prime = 1;
		int j = 2;
		while(j*j<=i){
			if(i%j==0){
				prime=0;
				break;
			}
			j++;
		}
		if(prime){
			printf("\n%d",i);
		}
	}
}

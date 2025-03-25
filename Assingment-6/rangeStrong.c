#include<stdio.h>

void main(){
	int range;
	printf("Enter the range:");
	scanf("%d",&range);
	rangeStrong(&range);
}
void rangeStrong(int* a){
	int range= *a;
	int temp;
	int rem;
	int fact;
	int j;
	int sum;
	int i;
	for(i=1;i<=range;i++){
				temp=i;
				sum=0;
			while(temp>0){
				rem = temp%10;
				fact = 1;
				j = 1;
				
				while(j<=rem){
					fact = j*fact;
						j++;
				}
				//printf("%d\n",fact);
				sum = sum + fact;
				//printf("%d\n",sum);
				temp = temp/10;	
			}
		//	printf("\nsum:%d",sum);
			if(sum==i){
				printf("\n%d",i);
			
			}		
	}			
}

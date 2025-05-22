#include<stdio.h>
//strong range
void main(){
	int range;
		int temp;
			int rem;
			int fact;
			int j;
			int sum;
	printf("Enter the range:");
	scanf("%d",&range);
	
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
				
				sum = sum + fact;
				
				temp = temp/10;	
			}
		
			if(sum==i){
				printf("\n%d",i);
			
			}		
	}
}

#include<stdio.h>

void main(){
	int n;
	
	printf("Enter the range");
	scanf("%d",&n);
	int i;
	for(i=1;i<n;i++){
		int temp = i;
		int num = i;
		int sum=0;
		int rem=0;
		while(num>0){
			rem = num%10;
			sum = sum + rem*rem*rem;
			num = num/10;
		}
		if(sum==i){
			printf("\n%d",sum);
		}
	}
}

#include<stdio.h>
//Printing alternate numbers from an array
void main(){
	int size;
	
	printf("Enter the size of the array:");
	scanf("%d",&size);
	
	int arr[size];
	int i;
	printf("Enter the elements in arr:");
	for(i=0;i<size;i++){
		printf("\narr[%d]=",i);
		scanf("%d",&arr[i]);
	}
	
	printf("{");
	for(i=0;i<size;i++){
		printf(" %d ",arr[i]);
	}
	printf("}");
	
	printf("\nPrinting Alternate Numbers:-");
	printf("{");
	for(i=0;i<size;i++){
		if(i%2==0){
			printf(" %d ",arr[i]);
		}
	}
	printf("}");
}

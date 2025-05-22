#include<stdio.h>
//Sorting an given array
void main(){
	int size,i;
	
	printf("Enter the size of the both arrays:");
	scanf("%d",&size);
	
	int* arr=(int*)malloc(sizeof(int)*size);
	printf("\nEnter the elements in 1st arr:");
	for(i=0;i<size;i++){
		printf("\narr[%d]=",i);
		scanf("%d",&arr[i]);
	}
	
	printf("\nArray is:-");
	printf("{");
	for(i=0;i<size;i++){
			printf(" %d ",arr[i]);
	}
	printf("}");
	
	sortArray(arr,size);
	
}
void sortArray(int arr[],int size){
	int i;
		for(i=0;i<size;i++){
			int j;
			for(j=1;j<size;j++){
				if(arr[j]<arr[j-1]){
					swap(&arr[j],&arr[j-1]);
				}
			}
		}
	printf("\nArray is:-");
	printf("{");
	for(i=0;i<size;i++){
			printf(" %d ",arr[i]);
	}
	printf("}");
}
void swap(int* a,int* b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

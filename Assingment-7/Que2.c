#include<stdio.h>
//Searching an element in an array
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
	search(arr,size);
}

int search(int arr[],int size){
	int num;	
	printf("\nEnter the number you want to search:");
	scanf("%d",&num);
	int i;
	for(i=0;i<size;i++){
		if(arr[i]==num){
			printf("\nFound element at index:%d",i);
			return;
		}
	}
	printf("Element not found");
}

#include<stdio.h>
#include<string.h>
//3)strncpy(dest,src,n) --> Copies first n characters from src to dest.
void main(){
	char arr[10];
	printf("Enter String:");
	scanf("%s",arr);
	char brr[10];
	strncpy(brr,arr,3);
	printf("%s",brr);
}

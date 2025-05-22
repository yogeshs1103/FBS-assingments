#include<stdio.h>
#include<string.h>
//5)strncat(dest,src,n) --> Appends the first n charaters of src string to the end of dest.
void main(){
	char arr[10];
	printf("Enter String:");
	scanf("%s",arr);
	char brr[10];
	printf("Enter String:");
	scanf("%s",brr);
	strncat(brr,arr,3);
	printf("%s",brr);
}

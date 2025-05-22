#include<stdio.h>
#include<string.h>
//4)strcat(dest,src) --> Appends the src string to the end of dest.
void main(){
	char arr[10];
	printf("Enter String:");
	scanf("%s",arr);
	char brr[10];
	printf("Enter String:");
	scanf("%s",brr);
	strcat(brr,arr);
	printf("%s",brr);
}

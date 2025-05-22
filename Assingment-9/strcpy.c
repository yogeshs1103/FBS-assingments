#include<stdio.h>
#include<string.h>
//2)strcpy(dest,src) --> Copies the entire source string (src) into the destination (dest)
void main(){
	char arr[10];
	printf("Enter your name:");
	scanf("%s",arr);
	char brr[10];
	strcpy(brr,arr);
	printf("Hello,%s",brr);
}

#include<stdio.h>
#include<string.h>
//1)strlen() --> Get the length of a string
void main(){
	char arr[10];
	printf("Enter your name:");
	scanf("%s",arr);
	int length = strlen(arr);
	printf("%d\n",length);
}

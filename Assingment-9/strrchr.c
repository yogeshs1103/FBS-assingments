#include<stdio.h>
#include<string.h>
//9)strrchr(str,ch) --> Returns a pointer to the last occurence of character ch in string. 
void main(){
	char arr[10]="banana";
//	printf("Enter String:");
//	scanf("%s",arr);
	char *ptr=strrchr(arr,'n');
	printf("Found at:%s\n",ptr);
}

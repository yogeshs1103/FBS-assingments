#include<stdio.h>
#include<string.h>
//8)strchr(str,ch) --> Returns a pointer to the first occurence of character ch in string. 
void main(){
	char arr[10];
	printf("Enter String:");
	scanf("%s",arr);
	char *ptr=strchr(arr,'o');
	printf("Found at:%s\n",ptr);
}

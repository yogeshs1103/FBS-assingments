#include<stdio.h>
#include<string.h>
//10)strstr(haystack,needle) --> Returns a pointer to the first occurence of substring needle in haystack. 
void main(){
	char *ptr = strstr("Programming in C","gram");
	printf("Found: %s\n",ptr);
}

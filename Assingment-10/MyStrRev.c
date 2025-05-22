#include<stdio.h>
void mystrrev(char*);
void main(){
	char str1[20];
	printf("Enter a string:");
	scanf("%s",str1);
	
	mystrrev(str1);
	printf("%s",str1);
}
void mystrrev(char* str){
	int start =0;
	int end = strlen(str)-1;
	char temp;
	while(start<end){
		temp = str[start];
		str[start]=str[end];
		str[end]=temp;
		
		start++;
		end--;
	}
}

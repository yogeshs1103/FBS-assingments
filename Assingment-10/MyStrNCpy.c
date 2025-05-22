#include<stdio.h>
void mystrncpy(char*,char*,int);
void main(){
	char str1[30],str2[30];
	int n;
	
	printf("Enter a String:");
	scanf("%s",str1);
	
	printf("Enter the number of elements you want to copy:");
	scanf("%d",&n);
	if(strlen(str1)>n){
		mystrncpy(str2,str1,n);
		printf("First %d elements of string are copied :%s",n,str2);
	}else
		printf("Length of String Exceeds!!!");
	
	
}
void mystrncpy(char* dest,char* src,int n){
	int len = strlen(src);
	
	int i=0;
	while(i<n){
		dest[i] = src[i];
		i++;
	}
	dest[i]='\0';
	
}

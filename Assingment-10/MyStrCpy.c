#include<stdio.h>
void mystrcpy(char*,char*);
void main(){
	char str1[30],str2[30];
	
	printf("Enter a String:");
	scanf("%s",str1);
	
	mystrcpy(str2,str1);
	
	printf("String is copied :%s",str2);
}
void mystrcpy(char* dest,char* src){
	
	int i=0;
	while(src[i] != '\0'){
		dest[i] = src[i];
		i++;
	}
	dest[i]='\0';
	
}


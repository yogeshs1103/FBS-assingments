#include<stdio.h>
char* mystrcat(char*,char*);
void main(){
	char str[30],str1[30];
	
	printf("Enter Your First Name:");
	scanf("%s",str);
	
	printf("Enter Your Last name:");
	scanf("%s",str1);
	
	mystrcat(str,str1);
	
	printf("%s",str);
}
char* mystrcat(char* str,char* str1){
	int len=mystrlen(str),j=0;

	int i=len;
	while(str1[j] != '\0'){
		str[i++] = str1[j++];
	}
	str[i]='\0';
	
	return str;
}
int mystrlen(char* str){
	int i =0;
	
	while(str[i] != '\0'){
		i++;
	}
	return i;
}

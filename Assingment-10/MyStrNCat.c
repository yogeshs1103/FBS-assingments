#include<stdio.h>
char* mystrncat(char*,char*,int);
void main(){
	char str[30],str1[30];
	
	printf("Enter Your First Name:");
	scanf("%s",str);
	
	printf("Enter Your Last name:");
	scanf("%s",str1);
	
	mystrncat(str,str1,3);
	
	printf("%s",str);
}
char* mystrncat(char* str,char* str1,int n){
	int len=mystrlen(str),j=0;
	
	int i=len;
	while(j < n){
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

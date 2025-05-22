#include<stdio.h>

void main(){
	char str[30],str1[30];
	
	printf("Enter Your First Name:");
	scanf("%s",str);
	
	printf("Enter Your Last name:");
	scanf("%s",str1);
	
	int len1=mystrlen(str);
	int len2=mystrlen(str1);	
	
	printf("Length of String 1:%d\n",len1);
	printf("Length of String 2:%d",len2);
}

int mystrlen(char* str){
	int i =0;
	
	while(str[i] != '\0'){
		i++;
	}
	return i;
}

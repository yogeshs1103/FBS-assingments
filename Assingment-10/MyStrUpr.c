#include<stdio.h>
char* mystrupr(char*);
void main(){
	char str[20];
	printf("Enter a string:");
	scanf("%s",&str);
	printf("%s",mystrupr(str));
}
char* mystrupr(char* str){
	int i=0;
	while(str[i] != '\0'){
		if(str[i]>='a' && str[i]<='z'){
			str[i] = str[i] - 32;
		}
		i++;
	}
	str[i] = '\0';
	return str;	
}

#include<stdio.h>
char* mystrrchr(char*,char);
void main(){
	char str[20];
	char ch;
	printf("Enter a string:");
	scanf("%s",&str);
	printf("Enter a character you want to search:");
	fflush(stdin); //fflush it clears the buffer on the way
	scanf("%c",&ch);
	char* ptr = mystrrchr(str,ch);
//	char* ptr=strchr(str,'o');
	printf("\nFound at:%s",ptr);
}
char* mystrrchr(char* str,char ch){
	int i=strlen(str);
	while(i>=0){
		if(str[i]==ch){
			return str+i;
		}
		i--;
	}
	return NULL;
}

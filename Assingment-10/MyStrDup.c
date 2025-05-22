#include<stdio.h>
char* mystrdup(char*);
void main(){
	char str[20];
	printf("Enter a string:");
	scanf("%s",str);
	printf("%d",str);
//	char* ptr = mystrdup(str);
//	char* ptr=strchr(str,'o');
	printf("\nFound at:%s",mystrdup(str));
	printf("\nFound at:%d",mystrdup(str));
}
char* mystrdup(char* str){
	int i=0;
	int size=strlen(str)+1;
	char* dup=(char*)malloc(sizeof(char)*size);
	while(i<size){
		dup[i]=str[i];
		i++;
	}
	return dup;
}

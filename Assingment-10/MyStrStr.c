#include<stdio.h>
char* mystrstr(char*,char*);
void main(){
	char str1[20];
	char str2[20];
	printf("Enter a string:");
	scanf("%s",str1);
	printf("Enter a substring:");
	fflush(stdin); 
	scanf("%s",str2);
	
	char* ptr=mystrstr(str1,str2);
	printf("%s",ptr);
}
char* mystrstr(char* str1,char* str2){
	
	int i,start,j;
	
	for(i=0;str1[i] != '\0';i++){
		start=i;
		j=0;
		while(str1[i] == str2[j] && str1[i] != '\0' && str2[j] != '\0'){
			i++;
			j++;
		}
		if(str2[j] == '\0'){
			return str1+start;
		}
		i=start;
	}
	return NULL;
}

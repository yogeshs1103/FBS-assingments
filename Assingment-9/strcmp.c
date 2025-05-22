#include<stdio.h>
#include<string.h>
//6)strcmp(str1,str2) --> Compares str1 and str2. Returns 0 if equal,positive if str1 > str2, negative if str1<str2.
void main(){
	char arr[10];
	printf("Enter String:");
	scanf("%s",arr);
	char brr[10];
	printf("Enter String:");
	scanf("%s",brr);
	int res=strcmp(brr,arr);
//	printf("%d",res);
	if(res==0){
		printf("Both the strings are equal");
	}else if(res==1){
		printf("String1 is greater than String2");
	}else if(res==-1)
		printf("String2 is greater than String1");
	
}

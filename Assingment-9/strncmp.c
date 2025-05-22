#include<stdio.h>
#include<string.h>
//7)strncmp(str1,str2,n) --> Compares the first n characters of str1 and str2. 
void main(){
	char arr[10];
	printf("Enter String:");
	scanf("%s",arr);
	char brr[10];
	printf("Enter String:");
	scanf("%s",brr);
	int res=strncmp(brr,arr,2);
	//printf("%d",res);
	if(res==0){
		printf("Both the strings are equal");
	}else if(res==1){
		printf("String1 is greater than String2");
	}else if(res==-1)
		printf("String2 is greater than String1");
	
}

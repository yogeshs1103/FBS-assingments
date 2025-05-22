#include<stdio.h>

void main(){
	char str1[30],str2[30];
	
	printf("Enter First String:");
	scanf("%s",str1);
	
	printf("Enter Second String:");
	scanf("%s",str2);
	
//	printf("%d",mystrcmp(str1,str2));
	0==mystrcmp(str1,str2)?printf("Both the strings are equal"):printf("Both the strings are not equal");
	
}
int mystrcmp(char* str1,char*str2){

	int i=0;
	int sum1=0,sum2=0;
	while(str1[i] != '\0'){
		sum1 = sum1 + str1[i];
		i++;	
	}
	i=0;
	while(str2[i] != '\0'){
		sum2 = sum2 + str2[i];
		i++;
	}
//	printf("%d %d",sum1,sum2);
	
	if(sum1==sum2)
		return 0;
	else if(sum1>sum2)
		return 1;
	
	return -1;
}

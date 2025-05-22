#include<stdio.h>

void main(){
	char str1[30],str2[30];
	int n;
	
	printf("Enter First String:");
	scanf("%s",str1);
	
	printf("Enter Second String:");
	scanf("%s",str2);
	
	printf("Enter the number of first characters you want to compare:");
	scanf("%d",&n);
//	printf("%d",mystrcmp(str1,str2));
	int res=mystrncmp(str1,str2,n);
	if(res==0){
		printf("First %d characters of the string are equal",n);
	}else if(res==1){
		printf("First %d characters of the string are not equal",n);
	}else
		printf("String1 is greater than String2");
}
int mystrncmp(char* str1,char*str2,int n){

	int i=0;
	int sum1=0,sum2=0;
	while(i<n){
		sum1 = sum1 + str1[i];
		i++;	
	}
	i=0;
	while(i<n){
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

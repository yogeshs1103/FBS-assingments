#include<stdio.h>
typedef struct HR{
	int id;
	char name[20];
	long int sal;
	int comission;
}HR;
void display(HR a1){
	printf("HR id:%d\nHR Name:%s\nHR Salary:%ld\nHR Comission:%d",a1.id,a1.name,a1.sal,a1.comission);
}
HR store(){
	HR a1;
	printf("Enter the HR Id:");
	scanf("%d",&a1.id);
	
	printf("Enter the HR name:");
	fflush(stdin);
	scanf("%s",a1.name);
	
	printf("Enter the HR salary:");
	fflush(stdin);
	scanf("%ld",&a1.sal);	
	
	printf("Enter the HR comission:");
	fflush(stdin);
	scanf("%d",&a1.comission);
	return a1;
}
void main(){
	HR a1;
	a1=store();
	display(a1);
}

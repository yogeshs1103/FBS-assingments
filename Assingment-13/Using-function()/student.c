#include<stdio.h>
typedef struct Student{
	int rollNo;
	char name[20];
	float marks;
}S;
S store(){
	S s1;
	printf("Enter the roll number:");
	scanf("%d",&s1.rollNo);
	
	printf("Enter the name:");
	fflush(stdin);
	scanf("%s",s1.name);
	
	printf("Enter the marks:");
	fflush(stdin);
	scanf("%f",&s1.marks);
	
	return s1;
}
void display(S s1){
	printf("Roll Number:%d\nName:%s\nMarks:%.2f",s1.rollNo,s1.name,s1.marks);
}
void main(){
		S s1;
		s1=store();
		display(s1);
	
}

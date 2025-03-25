#include<stdio.h>
void main()
{
	int male;
	printf("enter any number:");
	scanf("%d",&male);
	
	if(male>=21)
	printf("ELIGIBLE TO  MARRY MALE\n");
	else
	printf("NOT ELIGIBLE TO MARRY MALE\n");
	
	int female;
	printf("enter any number:");
	scanf("%d",&female);
	
	if(female>=18)
	printf("ELIGIBLE TO MARRY FEMALE\n");
	else
	printf("NOT ELIGIBLE TO MARRY FEMALE");
}
